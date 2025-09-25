// DS Remastered Goomba Behavior (bhvGoomba and bhvGoombaTripletSpawner)
// Goombas can be regular, huge, or tiny. They can also be spawned
// individually or in groups of three from a triplet spawner.

// file: goomba.inc.c

// Goomba Hitbox
static struct ObjectHitbox sGoombaHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 72,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 42,
    /* hurtboxHeight:     */ 40,
};

// Goomba Properties
struct GoombaProperties {
    f32 scale;
    u32 deathSound;
    s16 drawDistance;
    s8 damage;
};

// Varying properties for regular, huge, and tiny goombas
static struct GoombaProperties sGoombaProperties[] = {
    { 1.5f, SOUND_OBJ_ENEMY_DEATH_HIGH, 4000, 1 },
    { 3.5f, SOUND_OBJ_ENEMY_DEATH_LOW, 4000, 2 },
    { 0.5f, SOUND_OBJ_ENEMY_DEATH_HIGH, 1500, 0 },
};

// Atack handlers for regular, tiny and huge goombas
static u8 sGoombaAttackHandlers[][6] = {
    { // Regular/Tiny
        ATTACK_HANDLER_KNOCKBACK, // Activated by ATTACK_PUNCH
        ATTACK_HANDLER_KNOCKBACK, // Activated by ATTACK_KICK_OR_TRIP
        ATTACK_HANDLER_SQUISHED,  // Activated by ATTACK_FROM_ABOVE
        ATTACK_HANDLER_SQUISHED,  // Activated by ATTACK_GROUND_POUND_OR_TWIRL
        ATTACK_HANDLER_KNOCKBACK, // Activated by ATTACK_FAST_ATTACK
        ATTACK_HANDLER_KNOCKBACK, // Activated by ATTACK_FROM_BELOW
    },
    { // Huge
        ATTACK_HANDLER_SPECIAL_HUGE_GOOMBA_WEAKLY_ATTACKED, // Activated by ATTACK_PUNCH
        ATTACK_HANDLER_SPECIAL_HUGE_GOOMBA_WEAKLY_ATTACKED, // Activated by ATTACK_KICK_OR_TRIP
        ATTACK_HANDLER_SQUISHED,                            // Activated by ATTACK_FROM_ABOVE
        ATTACK_HANDLER_SQUISHED_WITH_BLUE_COIN,             // Activated by ATTACK_GROUND_POUND_OR_TWIRL
        ATTACK_HANDLER_SPECIAL_HUGE_GOOMBA_WEAKLY_ATTACKED, // Activated by ATTACK_FAST_ATTACK
        ATTACK_HANDLER_SPECIAL_HUGE_GOOMBA_WEAKLY_ATTACKED, // Activated by ATTACK_FROM_BELOW
    },
};

// Goomba Triplet Spawner
void bhv_goomba_triplet_spawner_update(void) {
    s16 goombaFlag;
    s32 angle;

    // Spawn the goombas if the player is close and no_drawing_distance is disabled
    if (o->oAction == GOOMBA_TRIPLET_SPAWNER_ACT_UNLOADED) {
#ifndef NODRAWINGDISTANCE
        if (o->oDistanceToPlayer < 3000.0f) {
#endif
            s32 dAngle = 0x10000 / (((o->oBhvParams2ndByte & GOOMBA_TRIPLET_SPAWNER_BP_EXTRA_GOOMBAS_MASK) >> 2) + 3);

            for (angle = 0, goombaFlag = 1; angle < 0xFFFF; angle += dAngle, goombaFlag <<= 1) {
                // Only spawn goombas which haven't been killed yet
                if (!(o->respawnInfo & goombaFlag)) {
                    s16 dx = 500.0f * coss(angle);
                    s16 dz = 500.0f * sins(angle);
                    spawn_object_relative((o->oBhvParams2ndByte & GOOMBA_BP_SIZE_MASK) | (goombaFlag << 2), dx, 0, dz, o, MODEL_GOOMBA, bhvGoomba);
                }
            }
            o->oAction++;
#ifndef NODRAWINGDISTANCE
        }
    } else if (o->oDistanceToPlayer > 4000.0f) {
        o->oAction = GOOMBA_TRIPLET_SPAWNER_ACT_UNLOADED;
#endif
    }
}

// Goomba Initialization
void bhv_goomba_init(void) {
    o->oGoombaSize = o->oBhvParams2ndByte & GOOMBA_BP_SIZE_MASK;

    o->oGoombaScale = sGoombaProperties[o->oGoombaSize].scale;
    o->oDeathSound = sGoombaProperties[o->oGoombaSize].deathSound;

    obj_set_hitbox(o, &sGoombaHitbox);

    o->oDrawingDistance = sGoombaProperties[o->oGoombaSize].drawDistance;
    o->oDamageOrCoinValue = sGoombaProperties[o->oGoombaSize].damage;

    o->oGravity = -1.5f * o->oGoombaScale;
}

// Goomba jump action
static void goomba_begin_jump(void) {
    cur_obj_play_sound_2(SOUND_OBJ_GOOMBA_ALERT);

    o->oAction = GOOMBA_ACT_JUMP;
    o->oForwardVel = 0.0f;
    o->oVelY = 12.5f * o->oGoombaScale;
}

// If spawned by a triplet spawner, mark the goomba as dead. Prevents false respawns
static void mark_goomba_as_dead(void) {
    if (o->parentObj != o) {
        set_object_respawn_info_bits(
            o->parentObj, (o->oBhvParams2ndByte & GOOMBA_BP_TRIPLET_RESPAWN_FLAG_MASK) >> 2);
    }
}

// Goomba walk action
static void goomba_act_walk(void) {
    treat_far_home_as_player(1000.0f);

    obj_forward_vel_approach(o->oGoombaRelativeSpeed * o->oGoombaScale, 0.4f);

    f32 animSpeed; // Define animspeed:
    if ((animSpeed = o->oForwardVel / o->oGoombaScale * 0.25f) < 1.0f) {
        animSpeed = 0.7f;
    }

    // If walking fast enough, play footstep sounds and running animation
    if (o->oGoombaRelativeSpeed > 4.0f / 3.0f) {
        cur_obj_init_animation_with_accel_and_sound(2, animSpeed);
        cur_obj_play_sound_at_anim_range(2, 17, SOUND_OBJ_GOOMBA_WALK);
    } else {
        cur_obj_init_animation_with_accel_and_sound(1, animSpeed);
    }

    if (o->oGoombaTurningAwayFromWall) {
        o->oGoombaTurningAwayFromWall = obj_resolve_collisions_and_turn(o->oGoombaTargetYaw, 0x200);
    } else {
        // If far from home, walk toward home.
        if (o->oDistanceToPlayer >= 25000.0f) {
            o->oGoombaTargetYaw = o->oAngleToPlayer;
            o->oGoombaWalkTimer = random_linear_offset(50, 60);
        }

        if (!(o->oGoombaTurningAwayFromWall = obj_bounce_off_walls_edges_objects(&o->oGoombaTargetYaw))) {
            if (o->oDistanceToPlayer < 750.0f) {
                if (o->oGoombaRelativeSpeed <= 2.0f) { // Chase the player
                    goomba_begin_jump();
                }

                o->oGoombaTargetYaw = o->oAngleToPlayer;
                o->oGoombaRelativeSpeed = 15.0f;
            } else {
                o->oGoombaRelativeSpeed = 4.0f / 3.0f;

                if (o->oGoombaWalkTimer != 0) {
                    o->oGoombaWalkTimer--;
                } else {
                    if (random_u16() & 3) {
                        o->oGoombaTargetYaw = obj_random_fixed_turn(0x2000);
                        o->oGoombaWalkTimer = random_linear_offset(300, 300);
                    } else {
                        o->oGoombaTargetYaw = obj_random_fixed_turn(0x6000);
                    }
                }
            }
        }
        cur_obj_rotate_yaw_toward(o->oGoombaTargetYaw, 0x200);
    }
}

// This action occurs when the goomba attacks player normally or the player
// attacks a huge goomba without killing it.
static void goomba_act_attacked_player(void) {
    if (o->oGoombaSize == GOOMBA_SIZE_TINY) {
        mark_goomba_as_dead();
#if !TINY_GOOMBA_DROP_COIN
        o->oNumLootCoins = 0;
#endif
        obj_die_if_health_non_positive();
    } else {
        if (o->oPosY <= o->oFloorHeight) {
            goomba_begin_jump();
        }
        o->oGoombaTargetYaw = o->oAngleToPlayer;
        o->oGoombaTurningAwayFromWall = FALSE;
    }
}

// Move until landing, and rotate toward target yaw.
static void goomba_act_jump(void) {
    obj_resolve_object_collisions(NULL);
    if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {
        o->oAction = GOOMBA_ACT_WALK;
    } else {
        cur_obj_rotate_yaw_toward(o->oGoombaTargetYaw, 0x800);
    }
}

/**
 * Attack handler for when player attacks a huge goomba with an attack that
 * doesn't kill it.
 * From the goomba's perspective, this is the same as the goomba attacking
 * player.
 */
void huge_goomba_weakly_attacked(void) {
    o->oAction = GOOMBA_ACT_ATTACKED_MARIO;
}

// Goomba Update Function
void bhv_goomba_update(void) {
    if (obj_update_standard_actions(o->oGoombaScale)) {
        // If this goomba has a spawner and player moved away from the spawner, unload
        if (o->parentObj != o) {
            if (o->parentObj->oAction == GOOMBA_TRIPLET_SPAWNER_ACT_UNLOADED) {
                obj_mark_for_deletion(o);
            }
        }

        cur_obj_scale(o->oGoombaScale);
        obj_update_blinking(&o->oGoombaBlinkTimer, 30, 50, 5);
        cur_obj_update_floor_and_walls();

        switch (o->oAction) {
            case GOOMBA_ACT_WALK:
                goomba_act_walk();
                break;
            case GOOMBA_ACT_ATTACKED_MARIO:
                goomba_act_attacked_player();
                break;
            case GOOMBA_ACT_JUMP:
                goomba_act_jump();
                break;
        }
    {
        int attackType = obj_handle_attacks(&sGoombaHitbox, GOOMBA_ACT_ATTACKED_MARIO, sGoombaAttackHandlers[o->oGoombaSize & 1]);
        if (attackType && (o->oAction != GOOMBA_ACT_ATTACKED_MARIO)) {
            if (attackType != ATTACK_FROM_ABOVE) {
                cur_obj_init_animation(3);
            }
            mark_goomba_as_dead();
        }
    }
        cur_obj_move_standard(-78);
    } else {
        o->oAnimState = 1;
    }
}
