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
#include "actors/group11.h"

#include "make_const_nonconst.h"
#include "levels/si/header.h"

const LevelScript level_si_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(0x07, _si_segment_7SegmentRomStart, _si_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
    LOAD_MODEL_FROM_GEO(MODEL_ENEMY_LAKITU, enemy_lakitu_geo),
    ALLOC_LEVEL_POOL(),
    MARIO(MODEL_MARIO, BPARAM4(0x01), bhvPlayer),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),

    AREA(1, si_area_1),
        WARP_NODE(WARP_NODE_0A, LEVEL_SI, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_SUCCESS, LEVEL_CASTLE, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_DEATH, LEVEL_CASTLE, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 3277, -946, 819, 0, -90, 0, BPARAM2(0x0A), bhvSpinAirborneWarp),
        OBJECT(MODEL_SILVER_STAR, -870, -946, -2355, 0, 0, 0, 0x00000000, bhvSilverStar),
		OBJECT(MODEL_SILVER_STAR, -2765, -639, 2150, 0, 0, 0, 0x00000000, bhvSilverStar),
		OBJECT(MODEL_SILVER_STAR, -2519, 334, -2898, 0, 0, 0, 0x00000000, bhvSilverStar),
		OBJECT(MODEL_SILVER_STAR, -641, 181, -1999, 0, 0, 0, 0x00000000, bhvSilverStar),
		OBJECT(MODEL_NONE, 3626, -690, 206, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_1), bhvStarSwitchSpawnCondition),
		OBJECT(MODEL_NONE, -847, 93, -2221, 0, 0, 0, 0x00000000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -2519, -628, -2898, 0, 0, 0, 0x00000000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 246, -946, 3502, 0, 0, 0, 0x00000000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3649, -946, 632, 0, 0, 0, 0x00000000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3564, -946, -287, 0, 0, 0, 0x00000000, bhvPoleGrabbing),
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
