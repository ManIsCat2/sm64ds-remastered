#ifndef PLAYER_ACTIONS_OBJECT_H
#define PLAYER_ACTIONS_OBJECT_H

#include <PR/ultratypes.h>

#include "types.h"

s32 player_update_punch_sequence(struct PlayerState *m);
s32 player_execute_object_action(struct PlayerState *m);

#endif // PLAYER_ACTIONS_OBJECT_H
