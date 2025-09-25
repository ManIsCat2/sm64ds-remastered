// sl_snowman_wind.inc.c

void bhv_sl_snowman_wind_loop(void) {
    UNUSED s32 unused = 0;
    s16 playerAngleFromWindSource;
    Vec3f tempPos;

    if (o->oTimer == 0) {
        o->oSLSnowmanWindOriginalYaw = o->oMoveAngleYaw;
    }

    // Waiting for Player to approach.
    if (o->oSubAction == SL_SNOWMAN_WIND_ACT_IDLE) {
        o->oDistanceToPlayer = 0;

        // Check if Player is within 1000 units of the center of the bridge, and ready to speak.
        vec3f_copy_2(tempPos, &o->oPosX);
        obj_set_pos(o, 1100, 3328, 1164); // Position is in the middle of the ice bridge
        if (cur_obj_can_player_activate_textbox(1000.0f, 30.0f, 0x7FFF)) {
            o->oSubAction++;
        }
        vec3f_copy_2(&o->oPosX, tempPos);

    // Player has come close, begin dialog.
    } else if (o->oSubAction == SL_SNOWMAN_WIND_ACT_TALKING) {
        if (cur_obj_update_dialog(PLAYER_DIALOG_LOOK_UP, DIALOG_FLAG_TEXT_DEFAULT, DIALOG_153, 0)) {
            o->oSubAction++;
        }

    // Blowing, spawn wind particles (SL_SNOWMAN_WIND_ACT_BLOWING)
    } else if (o->oDistanceToPlayer < 1500.0f && absf(gPlayerObject->oPosY - o->oHomeY) < 500.0f) {
        // Point towards Player, but only within 0x1500 angle units of the original angle.
        if ((playerAngleFromWindSource = o->oAngleToPlayer - o->oSLSnowmanWindOriginalYaw) > 0) {
            if (playerAngleFromWindSource < 0x1500) {
                o->oMoveAngleYaw = o->oAngleToPlayer;
            } else {
                o->oMoveAngleYaw = o->oSLSnowmanWindOriginalYaw + 0x1500;
            }
        } else {
            if (playerAngleFromWindSource > -0x1500) {
                o->oMoveAngleYaw = o->oAngleToPlayer;
            } else {
                o->oMoveAngleYaw = o->oSLSnowmanWindOriginalYaw - 0x1500;
            }
        }
        // Spawn wind and play wind sound
        cur_obj_spawn_strong_wind_particles(12, 3.0f, 0, 0, 0);
        cur_obj_play_sound_1(SOUND_AIR_BLOW_WIND);
    }
}
