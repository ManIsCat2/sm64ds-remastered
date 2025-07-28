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
#include "levels/castle_courtyard/header.h"

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
    LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
    LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW(0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, BPARAM4(0x01), bhvPlayer),
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(WARP_NODE_05, LEVEL_BBH, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_0A, LEVEL_CASTLE_COURTYARD, 1, WARP_NODE_0A, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_0B, LEVEL_CASTLE_COURTYARD, 1, WARP_NODE_0B, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_01, LEVEL_CASTLE, 1, WARP_NODE_02, WARP_NO_CHECKPOINT),
        WARP_NODE(WARP_NODE_DEATH, LEVEL_CASTLE_GROUNDS, 1, WARP_NODE_03, WARP_NO_CHECKPOINT),
        OBJECT(MODEL_NONE, 0, -946, -1034, 0, -180, 0, BPARAM2(WARP_NODE_0B), bhvLaunchDeathWarp),
        OBJECT(MODEL_NONE, 0, -946, -1034, 0, -180, 0, BPARAM2(WARP_NODE_0A), bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, -6813, 2169, -5624, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 7379, 1563, -5734, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 7268, -2277, 7903, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, -6222, -485, 7238, 0, 0, 0, 0x00000000, bhvAmbientSounds),
		OBJECT(MODEL_NONE, -6222, -485, 7238, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_BOO, -410, -997, -2099, 0, 0, 0, 0, bhvCourtyardBooTriplet),
		OBJECT(MODEL_BOO, -2253, -1202, -2560, 0, 0, 0, BPARAM1(1) | BPARAM2(WARP_NODE_05), bhvBooWithCage),
		OBJECT(MODEL_BOO, -870, -946, -3053, 0, 30, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, 710, -946, -2747, 0, 180, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, -2048, -1151, -717, 0, 90, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, 1843, -1151, -717, 0, 90, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, -2636, -1151, -2961, 0, -45, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, 1296, -946, -1738, 0, -35, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, -962, -946, -1095, 0, 60, 0, 0, bhvBoo),
		OBJECT(MODEL_BOO, 2048, -1151, -2560, 0, -45, 0, 0, bhvBoo),
		OBJECT(MODEL_NONE, 0, -946, -3277, 0, 0, 0, 0x00000000, bhvBowserCourseRedCoinStar),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 819, -1047, 205, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -819, -1047, 205, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 819, -1047, -3584, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -819, -1047, -3584, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -1640, -1263, -3229, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -2720, -1263, -2179, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -2445, -1263, -1788, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -2818, -1263, -1320, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -2533, -1263, -764, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, -1864, -1263, -50, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 1675, -1263, -128, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2377, -1263, -839, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2266, -1263, -1427, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2765, -1263, -1520, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2438, -1263, -2326, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_COURTYARD_SPIKY_TREE, 2046, -1263, -3037, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -1229, -788, 6963, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		PLAYER_POS(0x01, 90, -1229, -788, 6963),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SOUND_PLAYER),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	PLAYER_POS(0x01, 90, -1229, -788, 6963),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
