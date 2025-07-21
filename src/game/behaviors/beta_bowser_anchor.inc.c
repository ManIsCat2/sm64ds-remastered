
/**
 * Behavior for bhvBetaBowserAnchor.
 * This seems to be a beta bowser anchor object. It continuously updates to be
 * about the same distance away from Player as Bowser is, and it is destructive.
 */

/**
 * Update function for bhvBetaBowserAnchor.
 * It continuously updates to be in front of Player,
 * and attacks all non-Player objects it touches.
 * It continuously sets its hitbox radius/height
 * based on gDebugInfo[DEBUG_PAGE_EFFECTINFO].
 */
void bhv_beta_bowser_anchor_loop(void) {
    // Set the object's position to be 30 units above Player's feet,
    // and 300 units in front of him.
    cur_obj_set_pos_relative(gPlayerObject, 0, 30.0f, 300.0f);

    o->hitboxRadius = gDebugInfo[DEBUG_PAGE_EFFECTINFO][0] + 100;
    o->hitboxHeight = gDebugInfo[DEBUG_PAGE_EFFECTINFO][1] + 300;

    obj_attack_collided_from_other_object(o);
}
