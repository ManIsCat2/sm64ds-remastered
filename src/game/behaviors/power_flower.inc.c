// power_flower.inc.c
// Credits to Coolio for extended support on this function

static struct ObjectHitbox sPowerFlowerHitbox = {
    /* interactType:      */ INTERACT_CAP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

void bhv_power_flower_init(void) {
    o->oGravity = 0.65f;
    o->oFriction = 0.2f;
}

void bhv_power_flower_loop(struct PlayerState *m) {
    obj_set_hitbox(o, &sPowerFlowerHitbox);

    switch (o->oAction) {
        // Falling States
        case 0:
            // initialize velocities
            o->oAngleVelYaw = -0x700*2;
            o->oVelY = 20;
            o->oAction = 1;
            break;

        case 1:
            if (o->oTimer < 55) o->oAngleVelYaw += 0xC0/1.5f;
            o->oFaceAngleYaw += o->oAngleVelYaw;
            if (object_step() & OBJ_COL_FLAG_GROUNDED) {
                o->oFaceAngleYaw = calculate_yaw(o->header.gfx.pos, gCamera->pos);
                o->oAction = 2; 
            }
            break;

        // Idle State
        case 2:
            o->oAnimState = 1;
            Vec3f *scale = &m->playerObj->header.gfx.scale;
            if (cur_obj_wait_then_blink(200, 20)) {
                obj_mark_for_deletion(o);
            }
            break;
    }

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oInteractStatus = 0;
    }
}