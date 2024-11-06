// silver_star.inc.c (credits to peachypeach)

#include "actors/common0.h"
#include "game/object_list_processor.h"
#include "object_fields.h"
#include "object_constants.h"
#include "game/object_helpers.h"
#include "engine/surface_load.h"
#include "model_ids.h"
#include "game/level_update.h"
#include "course_table.h"
#include "game/spawn_sound.h"
#include "game/spawn_object.h"
#include "audio/external.h"
#include "engine/behavior_script.h"
#include "engine/surface_collision.h"
#include "behavior_data.h"
#include "game/interaction.h"
#include "sm64.h"
#include "game/print.h"
#include "gfx_dimensions.h"

static struct ObjectHitbox sSilverStarHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 40,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_silver_star_init(void) {
    //struct Object *o = gCurrentObject;
    gCurrentObject->oAction = gCurrentObject->oBhvParams2ndByte;

    switch (gCurrentObject->oBhvParams2ndByte) {
        // Idle
        case 0:
            gCurrentObject->oHomeX = gCurrentObject->oPosX;
            gCurrentObject->oHomeY = gCurrentObject->oPosY;
            gCurrentObject->oHomeZ = gCurrentObject->oPosZ;
            gCurrentObject->oVelX = 0;
            gCurrentObject->oVelY = 0;
            gCurrentObject->oVelZ = 0;
            break;

        // Roaming
        case 1:
            gCurrentObject->oHomeX = gCurrentObject->oPosX;
            gCurrentObject->oHomeY = gCurrentObject->oPosY;
            gCurrentObject->oHomeZ = gCurrentObject->oPosZ;
            break;

        // Goomba
        case 2:
            gCurrentObject->parentObj = spawn_object(o, MODEL_GOOMBA, bhvGoomba);
            break;
    }
    obj_set_hitbox(o, &sSilverStarHitbox);
}

void bhv_silver_star_handler_loop(void) {
    //struct Object *o = gCurrentObject;
    gCurrentObject->oPosX = gPlayerState->pos[0];
    gCurrentObject->oPosY = gPlayerState->pos[1];
    gCurrentObject->oPosZ = gPlayerState->pos[2];

    // Count remaining silver stars
    s32 remainingSilverStars = 0;
    struct Object *head = (struct Object *) &gObjectLists[OBJ_LIST_LEVEL];
    for (struct Object *obj = (struct Object *) head->header.next; obj != head; obj = (struct Object *) obj->header.next) {
        if (obj->behavior == bhvSilverStar) {
            remainingSilverStars++;
        }
    }

    // Drop a silver star if damaged
    if (remainingSilverStars < 5 && gPlayerState->hurtCounter > gCurrentObject->oAction) {
        struct Object *silverStar = spawn_object(o, MODEL_SILVER_STAR, bhvSilverStar);
        silverStar->oVelX = ((random_u16() & 1) ? -1.f : 1.f) * 12.f;
        silverStar->oVelY = 30.f;
        silverStar->oVelZ = ((random_u16() & 1) ? -1.f : 1.f) * 12.f;
        silverStar->oBhvParams = BPARAM2(1);
        silverStar->oBhvParams2ndByte = 1;
        remainingSilverStars++;
    }
    gCurrentObject->oAction = gPlayerState->hurtCounter;

    // Spawn the power star if Player collects 5 silver stars,
    // or despawn it if he loses one
    f32 dist;
    struct Object *star = cur_obj_find_nearest_object_with_behavior(bhvStarSwitchSpawnCondition, &dist);
    if (star) {
        if (star->oAction == 0 && remainingSilverStars == 0) {
            star->oAction = 1;
        } else if (star->oAction == 2 && remainingSilverStars != 0) {
            star->oAction = 3;
        }
    }
    gCurrentObject->oSubAction = remainingSilverStars;
}

extern int detect_object_hitbox_overlap(struct Object *, struct Object *);

void bhv_silver_star_loop(void) {
    //struct Object *o = gCurrentObject;
    gCurrentObject->oFaceAngleYaw += 0x800;
    switch (gCurrentObject->oAction) {

        // Still
        case 0:
            cur_obj_unhide();
            cur_obj_become_tangible();
            break;

        // Roaming
        case 1:
            cur_obj_unhide();
            cur_obj_become_tangible();
            gCurrentObject->oVelY = MAX(gCurrentObject->oVelY - 1.5f, -30.f);
            gCurrentObject->oPosX += gCurrentObject->oVelX;
            gCurrentObject->oPosY += gCurrentObject->oVelY;
            gCurrentObject->oPosZ += gCurrentObject->oVelZ;

            // Wall detection
            struct WallCollisionData wallbox;
            wallbox.x = gCurrentObject->oPosX;
            wallbox.y = gCurrentObject->oPosY - gCurrentObject->hitboxDownOffset;
            wallbox.z = gCurrentObject->oPosZ;
            wallbox.offsetY = gCurrentObject->hitboxHeight / 2;
            wallbox.radius = gCurrentObject->hitboxRadius;
            if (find_wall_collisions(&wallbox) != 0) {
                gCurrentObject->oPosX = wallbox.x;
                gCurrentObject->oPosY = wallbox.y;
                gCurrentObject->oPosZ = wallbox.z;
                gCurrentObject->oVelX = -gCurrentObject->oVelX;
                gCurrentObject->oVelZ = -gCurrentObject->oVelZ;
            }

            // Floor collision
            struct Surface *floor = NULL;
            f32 posY = gCurrentObject->oPosY - gCurrentObject->hitboxDownOffset;
            f32 floorY = find_floor(gCurrentObject->oPosX, posY, gCurrentObject->oPosZ, &floor);
            if (!floor) {

                // Out of bounds
                // Respawn at home
                gCurrentObject->oPosX = gCurrentObject->oHomeX;
                gCurrentObject->oPosY = gCurrentObject->oHomeY;
                gCurrentObject->oPosZ = gCurrentObject->oHomeZ;

            } else if (posY < floorY) {
                if (floor->type == SURFACE_DEATH_PLANE) {

                    // Death barrier reached
                    // Respawn at home
                    gCurrentObject->oPosX = gCurrentObject->oHomeX;
                    gCurrentObject->oPosY = gCurrentObject->oHomeY;
                    gCurrentObject->oPosZ = gCurrentObject->oHomeZ;
                } else {

                    // If the silver star hits the floor,
                    // bounces it up in a random horizontal direction
                    play_sound(SOUND_GENERAL_SHORT_STAR, gCurrentObject->header.gfx.cameraToObject);
                    gCurrentObject->oVelX = ((random_u16() & 1) ? -1.f : 1.f) * random_float() * 8.f;
                    gCurrentObject->oVelY = 30.f;
                    gCurrentObject->oVelZ = ((random_u16() & 1) ? -1.f : 1.f) * random_float() * 8.f;
                    gCurrentObject->oPosY = floorY + gCurrentObject->hitboxDownOffset;
                }
            }
            break;

        // Goomba
        case 2:
            cur_obj_hide();
            cur_obj_become_intangible();
            struct Object *goomba = gCurrentObject->parentObj;
            if (!goomba->activeFlags) {
                gCurrentObject->oAction = 1;
                gCurrentObject->oPosX = goomba->oPosX;
                gCurrentObject->oPosY = goomba->oPosY + 100.f;
                gCurrentObject->oPosZ = goomba->oPosZ;
                gCurrentObject->oHomeX = gCurrentObject->oPosX;
                gCurrentObject->oHomeY = gCurrentObject->oPosY;
                gCurrentObject->oHomeZ = gCurrentObject->oPosZ;
                gCurrentObject->oVelX = ((random_u16() & 1) ? -1.f : 1.f) * 12.f;
                gCurrentObject->oVelY = 30.f;
                gCurrentObject->oVelZ = ((random_u16() & 1) ? -1.f : 1.f) * 12.f;
            } else {
                gCurrentObject->oPosX = goomba->oPosX;
                gCurrentObject->oPosY = goomba->oPosY;
                gCurrentObject->oPosZ = goomba->oPosZ;
            }
            break;
    }

    // Spawn handler if it doesn't exist
    f32 dist;
    struct Object *handler = cur_obj_find_nearest_object_with_behavior(bhvSilverStarHandler, &dist);
    if (!handler) {
        handler = spawn_object(gPlayerObject, MODEL_NONE, bhvSilverStarHandler);
    }

    // Check collision with Player
    if (gCurrentObject->oTimer >= 30 && gCurrentObject->oIntangibleTimer == 0 && detect_object_hitbox_overlap(o, gPlayerObject)) {
        struct Object *orangeNumber = spawn_object_relative(6 - handler->oSubAction, 0, 0, 0, o, MODEL_NUMBER, bhvOrangeNumber);
        orangeNumber->oPosY += 25.0f;
        spawn_mist_particles_with_sound(SOUND_MENU_STAR_SOUND);
        obj_mark_for_deletion(o);
    }
}
