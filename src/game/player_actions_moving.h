#ifndef PLAYER_ACTIONS_MOVING
#define PLAYER_ACTIONS_MOVING

#include <PR/ultratypes.h>

#include "types.h"

void play_step_sound(struct PlayerState *m, s16 frame1, s16 frame2);
s32 player_execute_moving_action(struct PlayerState *m);

#endif // PLAYER_ACTIONS_MOVING
