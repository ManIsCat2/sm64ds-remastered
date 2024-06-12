#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/cotmc/header.h"

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(MODEL_MARIO, BPARAM4(0x01), bhvPlayer),
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 

	AREA(1, cotmc_area_1),
		WARP_NODE(WARP_NODE_0A, LEVEL_COTMC, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_SUCCESS, LEVEL_CASTLE, 3, WARP_NODE_34, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_DEATH, LEVEL_CASTLE, 3, WARP_NODE_66, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_WARP_FLOOR, LEVEL_CASTLE_GROUNDS, 1, WARP_NODE_14, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, 940, -792, -3626, 0, -90, 0, 0x00000000, bhvBobombBuddy),
		OBJECT(MODEL_MIST, -430, -1048, -7383, 0, 0, 0, 0x00000000, bhvWaterMist),
		OBJECT(MODEL_MIST, -143, -1048, -7342, 0, 0, 0, 0x00000000, bhvWaterMist),
		OBJECT(MODEL_MIST, 154, -1048, -7342, 0, 0, 0, 0x00000000, bhvWaterMist),
		OBJECT(MODEL_MIST, 430, -1048, -7383, 0, 0, 0, 0x00000000, bhvWaterMist),
		OBJECT(MODEL_STAR, 0, 2177, -6144, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_2), bhvStar),
		OBJECT(MODEL_NONE, -4301, -618, -51, 0, 90, 0, BPARAM2(WARP_NODE_0A), bhvAirborneWarp),
		OBJECT(MODEL_NONE, -31, -1427, -6952, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		MARIO_POS(0x01, 90, -4301, -618, -51),
		OBJECT(MODEL_NONE, -1, -1048, -7454, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -1, -1494, 3686, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
        SHOW_DIALOG(0x00, DIALOG_130),
        SET_BACKGROUND_MUSIC(0x0004, SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, -4301, -618, -51),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
