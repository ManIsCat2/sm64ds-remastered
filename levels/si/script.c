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
    LOAD_MIO0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd),
    LOAD_MIO0(0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(MODEL_MARIO, BPARAM4(1), bhvPlayer),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),

    AREA(1, si_area_1),
        OBJECT(MODEL_NONE, 0, -1535, 0, 0, 90, 0, BPARAM2(WARP_NODE_0A), bhvSwimmingWarp),
        WARP_NODE(WARP_NODE_0A, LEVEL_SA, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_SUCCESS, LEVEL_CASTLE, 1, WARP_NODE_27, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_DEATH, LEVEL_CASTLE, 1, WARP_NODE_28, WARP_NO_CHECKPOINT),
        TERRAIN(si_area_1_collision),
        MACRO_OBJECTS(si_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0, SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(1, 90, 0, -1535, 0),
    CALL(0, lvl_init_or_update),
    CALL_LOOP(1, lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(1),
    EXIT(),
};
