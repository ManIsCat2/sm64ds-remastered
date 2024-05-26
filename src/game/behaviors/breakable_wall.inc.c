// breakable_wall.inc.c

void bhv_wf_breakable_wall_loop(void) {
    if (gPlayerStates[0].action == ACT_SHOT_FROM_CANNON) {
        cur_obj_become_tangible();
        if (obj_check_if_collided_with_object(o, gPlayerObject)) {
            if (cur_obj_has_behavior(bhvWFBreakableWallRight)) {
                play_puzzle_jingle();
#if BETTER_WF_BREAKEABLE_WALL
                set_player_action(gPlayerState, ACT_SPAWN_SPIN_AIRBORNE, 0);
#endif
            }

            create_sound_spawner(SOUND_GENERAL_WALL_EXPLOSION);
            o->oInteractType = INTERACT_DAMAGE;
#if !BETTER_WF_BREAKEABLE_WALL
            o->oDamageOrCoinValue = 1;
#endif
            obj_explode_and_spawn_coins(80.0f, 0);
        }
    } else {
        cur_obj_become_intangible();
    }
}
