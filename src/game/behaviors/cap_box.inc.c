// cap_box.inc.c

#ifdef EXT_OPTIONS_MENU
#ifndef TARGET_N64
#include "pc/configfile.h"
#else
int configGlobalCapBlocks = FALSE;
#endif
#endif

struct ObjectHitbox sCapBoxHitbox = {
    /* interactType:      */ INTERACT_BREAKABLE,
    /* downOffset:        */ 5,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 50,
    /* height:            */ 40,
    /* hurtboxRadius:     */ 50,
    /* hurtboxHeight:     */ 40,
};

struct CapBoxContents {
    u8 id;
    u8 unused;
    u8 bhvParams1stByte;
    ModelID16 model;
    const BehaviorScript *behavior;
};

struct CapBoxContents sCapBoxContents[] = {
    { CAP_BOX_BP_WING_CAP,         0,                0, MODEL_MARIOS_WING_CAP,  bhvWingCap               },
    { CAP_BOX_BP_METAL_CAP,        0,                0, MODEL_MARIOS_METAL_CAP, bhvMetalCap              },
    { CAP_BOX_BP_VANISH_CAP,       0,                0, MODEL_MARIOS_CAP,       bhvVanishCap             },
    { CAP_BOX_BP_KOOPA_SHELL,      0,                0, MODEL_KOOPA_SHELL,      bhvKoopaShell            },
    { CAP_BOX_BP_ONE_COIN,         0,                0, MODEL_YELLOW_COIN,      bhvSingleCoinGetsSpawned },
    { CAP_BOX_BP_THREE_COINS,      0,                0, MODEL_NONE,             bhvThreeCoinsSpawn       },
    { CAP_BOX_BP_TEN_COINS,        0,                0, MODEL_NONE,             bhvTenCoinsSpawn         },
    { CAP_BOX_BP_1UP_WALKING,      0,                0, MODEL_1UP,              bhv1UpWalking            },
    { CAP_BOX_BP_STAR_ACT_1,       0, STAR_INDEX_ACT_1, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_1UP_RUNNING_AWAY, 0,                0, MODEL_1UP,              bhv1UpRunningAway        },
    { CAP_BOX_BP_STAR_ACT_2,       0, STAR_INDEX_ACT_2, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_STAR_ACT_3,       0, STAR_INDEX_ACT_3, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_STAR_ACT_4,       0, STAR_INDEX_ACT_4, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_STAR_ACT_5,       0, STAR_INDEX_ACT_5, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_STAR_ACT_6,       0, STAR_INDEX_ACT_6, MODEL_STAR,             bhvSpawnedStar           },
    { CAP_BOX_BP_END,              0,                0, MODEL_NONE,             NULL                     },
};

void bhv_rotating_cap_box_loop(void) {
    if (o->parentObj->oAction != 1) {
        obj_mark_for_deletion(o);
    }
}

void cap_box_act_0(void) {
    if (o->oBhvParams2ndByte <= CAP_BOX_BP_SPECIAL_CAP_END) {
        if (configGlobalCapBlocks) {
            o->oAnimState = o->oBhvParams2ndByte;
        } else {
            o->oAnimState = 4;
        }

        if ((save_file_get_flags() & sCapSaveFlags[o->oBhvParams2ndByte])
            || ((o->oBhvParams >> 24) & 0xFF)) {
            o->oAction = 2;
        } else {
            o->oAction = 1;
        }
    } else {
        o->oAnimState = CAP_BOX_ANIM_STATE_DEFAULT;
        o->oAction = 2;
    }
}

void cap_box_act_1(void) {
    cur_obj_become_intangible();

    if (o->oTimer == 0) {
        spawn_object(o, MODEL_EXCLAMATION_POINT, bhvRotatingExclamationMark);
        cur_obj_set_model(MODEL_CAP_BOX_OUTLINE);
    }

    if ((save_file_get_flags() & sCapSaveFlags[o->oBhvParams2ndByte])
        || ((o->oBhvParams >> 24) & 0xFF)) {
        o->oAction = 2;
        cur_obj_set_model(MODEL_CAP_BOX);
    }
}

void cap_box_act_2(void) {
    obj_set_hitbox(o, &sCapBoxHitbox);

    if (o->oTimer == 0) {
        cur_obj_unhide();
        cur_obj_become_tangible();
        o->oInteractStatus = 0;
        o->oPosY = o->oHomeY;
        o->oGraphYOffset = 0.0f;
    }

    if (cur_obj_was_attacked_or_ground_pounded()) {
        cur_obj_become_intangible();
        o->oCapBoxUnkFC = 0x4000;
        o->oVelY = 30.0f;
        o->oGravity = -8.0f;
        o->oFloorHeight = o->oPosY;
        o->oAction = 3;
#ifdef RUMBLE_FEEDBACK
        queue_rumble_data(5, 80);
#endif
    }

    load_object_collision_model();
}

void cap_box_act_3(void) {
    UNUSED u8 filler[4];

    cur_obj_move_using_fvel_and_gravity();

    if (o->oVelY < 0.0f) {
        o->oVelY = 0.0f;
        o->oGravity = 0.0f;
    }

    o->oCapBoxUnkF8 = (sins(o->oCapBoxUnkFC) + 1.0) * 0.3 + 0.0;
    o->oCapBoxUnkF4 = (-sins(o->oCapBoxUnkFC) + 1.0) * 0.5 + 1.0;
    o->oGraphYOffset = (-sins(o->oCapBoxUnkFC) + 1.0) * 26.0;
    o->oCapBoxUnkFC += 0x1000;
    o->header.gfx.scale[0] = o->oCapBoxUnkF4 * 2.0f;
    o->header.gfx.scale[1] = o->oCapBoxUnkF8 * 2.0f;
    o->header.gfx.scale[2] = o->oCapBoxUnkF4 * 2.0f;
    if (o->oTimer == 7) {
        o->oAction = 4;
    }
}

void cap_box_spawn_contents(struct CapBoxContents *contentsList, u8 boxType) {
    struct CapBoxContents *contents = &contentsList[boxType];
    struct Object *contentsObj = NULL;

    contentsObj = spawn_object(o, contents->model, contents->behavior);
    contentsObj->oVelY = 20.0f;
    contentsObj->oForwardVel = 3.0f;

    contentsObj->oMoveAngleYaw = gMarioObject->oMoveAngleYaw;
    o->oBhvParams |= contents->bhvParams1stByte << 24;
    if (contents->model == MODEL_STAR) {
        o->oFlags |= OBJ_FLAG_PERSISTENT_RESPAWN;
    }
#if KOOPA_SHELL_BOXES_RESPAWN
    if (contents->model == MODEL_KOOPA_SHELL) {
        contentsObj->oSubAction = 1;
    }
#endif
}

void cap_box_act_4(void) {
    if (!configGlobalCapBlocks && (o->oBhvParams2ndByte <= CAP_BOX_BP_SPECIAL_CAP_END)) {
        if (curChar == 2) {
            cap_box_spawn_contents(sCapBoxContents, CAP_BOX_BP_VANISH_CAP);
        } else if (curChar == 3) {
            cap_box_spawn_contents(sCapBoxContents, CAP_BOX_BP_METAL_CAP);
        } else {
            cap_box_spawn_contents(sCapBoxContents, CAP_BOX_BP_WING_CAP);
        }
    } else {
        cap_box_spawn_contents(sCapBoxContents, o->oBhvParams2ndByte);
    }

    spawn_mist_particles_variable(0, 0, 46.0f);
    spawn_triangle_break_particles(20, MODEL_CARTOON_STAR, 0.3f, o->oAnimState);
    create_sound_spawner(SOUND_GENERAL_BREAK_BOX);

    if (o->oBhvParams2ndByte <= CAP_BOX_BP_RESPAWN_END) {
        o->oAction = 5;
        cur_obj_hide();
    } else {
        obj_mark_for_deletion(o);
    }
}

void cap_box_act_5(void) {
    if (o->oTimer > 300) {
        o->oAction = 2;
    }
}

void (*sCapBoxActions[])(void) = {
    cap_box_act_0,
    cap_box_act_1,
    cap_box_act_2,
    cap_box_act_3,
    cap_box_act_4,
    cap_box_act_5,
};

void bhv_cap_box_loop(void) {
    cur_obj_scale(2.0f);
    cur_obj_call_action_function(sCapBoxActions);
}
