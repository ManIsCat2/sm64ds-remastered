
/**
 * Behavior for bhvEnemyLakitu.
 * Lakitu comes before it spawned spinies in processing order.
 * TODO: bhvCloud processing oredr
 */

/**
 * Hitbox for evil lakitu.
 */
static struct ObjectHitbox sEnemyLakituHitbox = {
    /* interactType:      */ INTERACT_HIT_FROM_BELOW,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 2,
    /* health:            */ 0,
    /* numLootCoins:      */ 5,
    /* radius:            */ 50,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 50,
};

/**
 * Wait for player to approach, then spawn the cloud and become visible.
 */
static void enemy_lakitu_act_uninitialized(void) {
#ifndef NODRAWINGDISTANCE
    if (o->oDistanceToPlayer < 2000.0f) {
#endif
        spawn_object_relative_with_scale(CLOUD_BP_LAKITU_CLOUD, 0, 0, 0, 2.0f, o, MODEL_MIST, bhvCloud);

        cur_obj_unhide();
        o->oAction = ENEMY_LAKITU_ACT_MAIN;
#ifndef NODRAWINGDISTANCE
    }
#endif
}

/**
 * Accelerate toward player vertically.
 */
static void enemy_lakitu_update_vel_y(f32 offsetY) {
    // In order to encourage oscillation, pass player by a small margin before
    // accelerating the opposite direction
    f32 margin;
    if (o->oVelY < 0.0f) {
        margin = -3.0f;
    } else {
        margin = 3.0f;
    }

    if (o->oPosY < gPlayerObject->oPosY + offsetY + margin) {
        obj_y_vel_approach(4.0f, 0.4f);
    } else {
        obj_y_vel_approach(-4.0f, 0.4f);
    }
}

/**
 * Control speed based on distance to player, turn toward player, and change move
 * angle toward player.
 */
static void enemy_lakitu_update_speed_and_angle(void) {
    f32 minSpeed;
    s16 turnSpeed;

    f32 distToPlayer = o->oDistanceToPlayer;
    if (distToPlayer > 500.0f) {
        distToPlayer = 500.0f;
    }

    // Move faster the farther away player is and the faster player is moving
    if ((minSpeed = 1.2f * gPlayerStates[0].forwardVel) < 8.0f) {
        minSpeed = 8.0f;
    }
    o->oForwardVel = distToPlayer * 0.04f;
    clamp_f32(&o->oForwardVel, minSpeed, 40.0f);

    // Accelerate toward player vertically
    enemy_lakitu_update_vel_y(300.0f);

    // Turn toward player except right after throwing a spiny
    if (o->oEnemyLakituFaceForwardCountdown != 0) {
        o->oEnemyLakituFaceForwardCountdown--;
    } else {
        obj_face_yaw_approach(o->oAngleToPlayer, 0x600);
    }

    // Change move angle toward player faster when farther from player
    turnSpeed = (s16)(distToPlayer * 2);
    clamp_s16(&turnSpeed, 200, 4000);
    cur_obj_rotate_yaw_toward(o->oAngleToPlayer, turnSpeed);
}

/**
 * When close enough to player and facing roughly toward him, spawn a spiny and
 * hold it, then enter the hold spiny sub-action.
 */
static void enemy_lakitu_sub_act_no_spiny(void) {
    cur_obj_init_animation_with_sound(1);

    if (o->oEnemyLakituSpinyCooldown != 0) {
        o->oEnemyLakituSpinyCooldown--;
    } else if (o->oEnemyLakituNumSpinies < 3 && o->oDistanceToPlayer < 800.0f
               && abs_angle_diff(o->oAngleToPlayer, o->oFaceAngleYaw) < 0x4000) {
        struct Object *spiny = spawn_object(o, MODEL_SPINY_BALL, bhvSpiny);
        if (spiny != NULL) {
            o->prevObj = spiny;
            spiny->oAction = SPINY_ACT_HELD_BY_LAKITU;
            obj_init_animation_with_sound(spiny, spiny_egg_seg5_anims_050157E4, 0);

            o->oEnemyLakituNumSpinies++;
            o->oSubAction = ENEMY_LAKITU_SUB_ACT_HOLD_SPINY;
            o->oEnemyLakituSpinyCooldown = 30;
        }
    }
}

/**
 * When close to player and facing toward him or when player gets far enough away,
 * enter the throw spiny sub-action.
 */
static void enemy_lakitu_sub_act_hold_spiny(void) {
    cur_obj_init_anim_extend(3);

    if (o->oEnemyLakituSpinyCooldown != 0) {
        o->oEnemyLakituSpinyCooldown--;
    }
    // TODO: Check if anything interesting happens if we bypass this with speed
    else if (o->oDistanceToPlayer > o->oDrawingDistance - 100.0f
             || (o->oDistanceToPlayer < 500.0f
                 && abs_angle_diff(o->oAngleToPlayer, o->oFaceAngleYaw) < 0x2000)) {
        o->oSubAction = ENEMY_LAKITU_SUB_ACT_THROW_SPINY;
        o->oEnemyLakituFaceForwardCountdown = 20;
    }
}

/**
 * Throw the spiny, then enter the no spiny sub-action.
 */
static void enemy_lakitu_sub_act_throw_spiny(void) {
    if (cur_obj_init_anim_check_frame(2, 2)) {
        cur_obj_play_sound_2(SOUND_OBJ_EVIL_LAKITU_THROW);
        o->prevObj = NULL;
    }

    if (cur_obj_check_if_near_animation_end()) {
        o->oSubAction = ENEMY_LAKITU_SUB_ACT_NO_SPINY;
        o->oEnemyLakituSpinyCooldown = random_linear_offset(100, 100);
    }
}

/**
 * Main update function.
 */
static void enemy_lakitu_act_main(void) {
    cur_obj_play_sound_1(SOUND_AIR_LAKITU_FLY);

    cur_obj_update_floor_and_walls();

    enemy_lakitu_update_speed_and_angle();
    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        o->oMoveAngleYaw = cur_obj_reflect_move_angle_off_wall();
    }

    obj_update_blinking(&o->oEnemyLakituBlinkTimer, 20, 40, 4);

    switch (o->oSubAction) {
        case ENEMY_LAKITU_SUB_ACT_NO_SPINY:
            enemy_lakitu_sub_act_no_spiny();
            break;
        case ENEMY_LAKITU_SUB_ACT_HOLD_SPINY:
            enemy_lakitu_sub_act_hold_spiny();
            break;
        case ENEMY_LAKITU_SUB_ACT_THROW_SPINY:
            enemy_lakitu_sub_act_throw_spiny();
            break;
    }

    cur_obj_move_standard(78);

    // Die and drop held spiny when attacked by player
    if (obj_check_attacks(&sEnemyLakituHitbox, o->oAction) != 0) {
        // The spiny uses this as a signal to get thrown
        o->prevObj = NULL;
    }
}

/**
 * Update function for bhvEnemyLakitu.
 */
void bhv_enemy_lakitu_update(void) {
    // PARTIAL_UPDATE

    treat_far_home_as_player(2000.0f);

    switch (o->oAction) {
        case ENEMY_LAKITU_ACT_UNINITIALIZED:
            enemy_lakitu_act_uninitialized();
            break;
        case ENEMY_LAKITU_ACT_MAIN:
            enemy_lakitu_act_main();
            break;
    }
}
