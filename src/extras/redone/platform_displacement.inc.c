/*
 * Redone description:
 * A rewritten version of platform displacement (hence the 2).
 * Adds intertia so Player has correct momentum on moving platforms.
 * Made by Arthurtilly.
 */

/**
 * Determine if Player is standing on a platform object, meaning that he is
 * within 4 units of the floor. Set his referenced platform object accordingly.
 */
void update_player_platform(void) {
    struct Surface *floor = gPlayerState->floor;

    if (gPlayerObject == NULL || floor == NULL) {
        return;
    }
    
    struct Object *floorObj = floor->object;

    if (floor != NULL
     && floorObj != NULL
     && absf(gPlayerObject->oPosY - gPlayerState->floorHeight) < 4.0f) {
        gPlayerObject->platform = floorObj;
    } else {
        gPlayerObject->platform = NULL;
    }
}

static struct PlatformDisplacementInfo sPlayerDisplacementInfo;
static Vec3f sPlayerAmountDisplaced;

extern s32 gGlobalTimer;

/**
 * Apply one frame of platform displacement to Player or an object using the given
 * platform.
 */
void apply_platform_displacement(struct PlatformDisplacementInfo *displaceInfo, Vec3f pos, s16 *yaw, struct Object *platform) {
    Vec3f platformPos;
    Vec3f posDifference;
    Vec3f yawVec;
    Vec3f scaledPos;
    // Determine how much Player turned on his own since last frame
    s16 yawDifference = *yaw - displaceInfo->prevYaw;

    // Avoid a crash if the platform unloaded its collision while stood on
    if (platform->header.gfx.throwMatrix == NULL) return;

    vec3f_copy(platformPos, (*platform->header.gfx.throwMatrix)[3]);

    // Determine how far Player moved on his own since last frame
    vec3f_copy(posDifference, pos);
    vec3f_sub(posDifference, displaceInfo->prevPos);

    if ((platform == displaceInfo->prevPlatform) && (gGlobalTimer == displaceInfo->prevTimer + 1)) {
        // Upscale position
        vec3f_prod(scaledPos, displaceInfo->prevTransformedPos, platform->header.gfx.scale);

        // Transform from relative positions to world positions
        linear_mtxf_mul_vec3f(*platform->header.gfx.throwMatrix, pos, scaledPos);

        // Add on how much Player moved in the previous frame
        vec3f_add(pos, posDifference);

        // Calculate new yaw
        linear_mtxf_mul_vec3f(*platform->header.gfx.throwMatrix, yawVec, displaceInfo->prevTransformedYawVec);
        *yaw = atan2s(yawVec[2], yawVec[0]) + yawDifference;
    } else {
        // First frame of standing on the platform, don't calculate a new position
        vec3f_sub(pos, platformPos);
    }

    // Apply velocity-based displacement for certain objects (like the TTC Treadmills)
    if (platform->oFlags & OBJ_FLAG_VELOCITY_PLATFORM) {
        vec3f_add(pos, &platform->oVelX);
    }

    // Transform from world positions to relative positions for use next frame
    linear_mtxf_transpose_mul_vec3f(*platform->header.gfx.throwMatrix, scaledPos, pos);

    // Downscale position
    vec3f_quot(displaceInfo->prevTransformedPos, scaledPos, platform->header.gfx.scale);
    vec3f_add(pos, platformPos);

    // If the object is Player, set inertia
    if (pos == gPlayerState->pos) {
        vec3f_copy(sPlayerAmountDisplaced, pos);
        vec3f_sub(sPlayerAmountDisplaced, displaceInfo->prevPos);
        vec3f_sub(sPlayerAmountDisplaced, posDifference);

        // Make sure inertia isn't set on the first frame otherwise the previous value isn't cleared
        if ((platform != displaceInfo->prevPlatform) || (gGlobalTimer != displaceInfo->prevTimer + 1)) {
            vec3_zero(sPlayerAmountDisplaced);
        }
    }

    // Update info for next frame
    // Update position
    vec3f_copy(displaceInfo->prevPos, pos);

    // Set yaw info
    vec3f_set(yawVec, sins(*yaw), 0, coss(*yaw));
    linear_mtxf_transpose_mul_vec3f(*platform->header.gfx.throwMatrix, displaceInfo->prevTransformedYawVec, yawVec);
    displaceInfo->prevYaw = *yaw;

    // Update platform and timer
    displaceInfo->prevPlatform = platform;
    displaceInfo->prevTimer = gGlobalTimer;
}

// Doesn't change in the code, set this to FALSE if you don't want inertia
u8 gDoInertia = TRUE;

static u8 sShouldApplyInertia = FALSE;
static u8 sInertiaFirstFrame = FALSE;

/**
 * Apply inertia based on Player's last platform.
 */
static void apply_player_inertia(void) {
    // On the first frame of leaving the ground, boost Player's y velocity
    if (sInertiaFirstFrame) {
        gPlayerState->vel[1] += sPlayerAmountDisplaced[1];
    }

    // Apply sideways inertia
    gPlayerState->pos[0] += sPlayerAmountDisplaced[0];
    gPlayerState->pos[2] += sPlayerAmountDisplaced[2];

    // Drag
    sPlayerAmountDisplaced[0] *= 0.97f;
    sPlayerAmountDisplaced[2] *= 0.97f;

    // Stop applying inertia once Player has landed, or when ground pounding
    if (!(gPlayerState->action & ACT_FLAG_AIR) || (gPlayerState->action == ACT_GROUND_POUND)) {
        sShouldApplyInertia = FALSE;
    }
}

/**
 * Apply platform displacement or inertia if required.
 */
void apply_player_platform_displacement(void) {
    if (!(gTimeStopState & TIME_STOP_ACTIVE) && gPlayerObject != NULL && !(gPlayerState->action & ACT_FLAG_INTANGIBLE)) {
        struct Object *platform = gPlayerObject->platform;

        if (platform != NULL) {
            apply_platform_displacement(&sPlayerDisplacementInfo, gPlayerState->pos, &gPlayerState->faceAngle[1], platform);
            sShouldApplyInertia = TRUE;
            sInertiaFirstFrame = TRUE;
        } else if (sShouldApplyInertia && gDoInertia) {
            apply_player_inertia();
            sInertiaFirstFrame = FALSE;
        }
    }
}
