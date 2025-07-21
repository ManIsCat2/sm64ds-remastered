// sliding_platform.inc.c

void bhv_wf_sliding_platform_init(void) {
    o->oFaceAngleYaw -= 0x4000;
    o->oPosX += 2.0f;
    o->oHomeX = o->oPosX + 10;
}

void bhv_wf_sliding_platform_loop(void) {
    switch (o->oAction) {
        case WF_SLID_BRICK_PTFM_ACT_WAIT:
            if (o->oTimer > 100) {
                o->oAction = WF_SLID_BRICK_PTFM_ACT_EXTEND;
                o->oForwardVel = 25.0f;
            }
            break;

        case WF_SLID_BRICK_PTFM_ACT_EXTEND:
            if (o->oTimer >= 20.0f) {
                o->oForwardVel = 0.0f;
                o->oPosX = o->oHomeX + 500.0f;
            }

            if (o->oTimer == 60) {
                o->oAction = WF_SLID_BRICK_PTFM_ACT_RETRACT;
                o->oForwardVel = 25.0f;
                o->oMoveAngleYaw -= 0x8000;
            }
            break;

        case WF_SLID_BRICK_PTFM_ACT_RETRACT:
            if (o->oTimer >= 20.0f) {
                o->oForwardVel = 0.0f;
                o->oPosX = o->oHomeX;
            }

            if (o->oTimer == 90) {
                o->oAction = WF_SLID_BRICK_PTFM_ACT_EXTEND;
                o->oForwardVel = 25.0f;
                o->oMoveAngleYaw -= 0x8000;
            }
            break;
    }
}
