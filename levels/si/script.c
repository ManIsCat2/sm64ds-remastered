#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/si/header.h"

const LevelScript level_si_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(0x07, _si_segment_7SegmentRomStart, _si_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
    LOAD_MIO0(0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(MODEL_MARIO, BPARAM4(0x01), bhvPlayer),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),

    AREA(1, si_area_1),
        WARP_NODE(WARP_NODE_0A, LEVEL_SI, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_SUCCESS, LEVEL_CASTLE, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_DEATH, LEVEL_CASTLE, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 3277, -946, 819, 0, -90, 0, BPARAM2(0x0A), bhvSpinAirborneWarp),
        TERRAIN(si_area_1_collision),
        MACRO_OBJECTS(si_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0, SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(1, -90, 3277, -946, 819),
    CALL(0, lvl_init_or_update),
    CALL_LOOP(1, lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(1),
    EXIT(),
};
