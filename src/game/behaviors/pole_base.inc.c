// pole_base.inc.c

void bhv_pole_base_loop(void) {
    if (o->oPosY - 10.0f < gPlayerObject->oPosY
        && gPlayerObject->oPosY < o->oPosY + o->hitboxHeight + 30.0f) {
        if (o->oTimer > 10 && !(gPlayerStates[0].action & PLAYER_PUNCHING)) {
            cur_obj_push_player_away(70.0f);
        }
    }
}
