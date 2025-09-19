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
#include "levels/ccm/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(MODEL_PENGUIN, -5427, 6656, -6144, 0, -90, 0, BPARAM1(STAR_INDEX_ACT_3) | BPARAM2(RACING_PENGUIN_BP_THIN), bhvRacingPenguin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(MODEL_NONE, -6500, -5836, -6400, 0, 0, 0, 0, bhvPenguinRaceFinishLine),
    OBJECT(MODEL_NONE, -4869, 1806, -622, 0, 0, 0, 0, bhvPenguinRaceShortcutCheck),
    OBJECT(MODEL_NONE, -4943, 1321, 667, 0, 0, 0, 0, bhvPlaysMusicTrackWhenTouched),
    RETURN(),
};

const LevelScript level_ccm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvPlayer),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),

    AREA(/*index*/ 1, ccm_geo_00051C),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1638,  3253, -2560, /*angle*/ 90, 140, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  -181,  2918, -1486, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM1(15) | BPARAM2(WARP_NODE_1E), /*bhv*/ bhvWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1847,  2815,  -321, /*angle*/ 0, -158, 0, /*bhvParam*/ BPARAM2(WARP_NODE_1F), /*bhv*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  3349, -4694,  -183, /*angle*/ 0,  -34, 0, /*bhvParam*/ BPARAM2(WARP_NODE_20), /*bhv*/ bhvFadingWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_14,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 2, /*destNode*/ WARP_NODE_14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_1E,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 2, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_1F,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 1, /*destNode*/ WARP_NODE_20, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_20,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 1, /*destNode*/ WARP_NODE_1F, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_65, /*flags*/ WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -613, 2560, -2497, 0, -90, 0, DIALOG_000, bhvBobombBuddy, ACT_2),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, -3379, -1260, -1946, 0, -135, 0, DIALOG_000, bhvBobombBuddy, ACT_4),
		OBJECT(MODEL_BREAKABLE_BOX, -3694, -1444, 1534, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -3722, -1395, 427, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -3442, -1439, 1311, 0, 0, 0, 0, bhvBreakableBox),
		OBJECT(MODEL_GOOMBA, 5341, -4608, 504, 0, 90, 0, 0, bhvGoomba),
		OBJECT(MODEL_NONE, 1247, -3994, 5473, 0, 0, 0, 0, bhvHoot),
		OBJECT(MODEL_LUIGIS_CAP, -4356, -1340, -612, 0, 180, 0, BPARAM2(0x01), bhvLuigiCap),
		OBJECT(MODEL_MARIOS_CAP, 5026, -4608, 1198, 0, 180, 0, BPARAM2(0x01), bhvMarioCap),
		OBJECT(MODEL_NONE, 4198, -1178, 410, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_4), bhvHiddenRedCoinStar),
		OBJECT(MODEL_CCM_ROPEWAY_LIFT, 562, -4455, 6423, 0, 0, 0, BPARAM1(0x07) | BPARAM2(0x12), bhvPlatformOnTrack),
		OBJECT_WITH_ACTS(MODEL_CCM_SNOWMAN_BASE, 2560, 2775, -1075, 0, 0, 0, 0, bhvSnowmansBottom, ACT_5),
		OBJECT(MODEL_CCM_SNOWMAN_HEAD, -4198, -1249, 1833, 0, -90, 0, BPARAM1(STAR_INDEX_ACT_5), bhvSnowmansHead),
		OBJECT_WITH_ACTS(MODEL_NONE, 2509, -4506, 5786, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_1), bhvCCMTouchedStarSpawn, ACT_1),
        OBJECT(MODEL_PENGUIN, 3533, -4608, 3942, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_2), bhvTuxiesMother),
		OBJECT(MODEL_STAR, -2048, -2211, -2867, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_6), bhvStar),
		OBJECT(MODEL_NONE, 3513, -4915, 4607, 0, 0, 0, BPARAM1(STAR_INDEX_ACT_7), bhvStarSwitchSpawnCondition),
		OBJECT(MODEL_STAR_SWITCH, -1004, -3584, 6026, 0, 0, 0, BPARAM2(30), bhvStarSwitch),
		OBJECT(MODEL_CCM_SNOW_TREE, -1768, 2560, -1793, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -1262, -3584, 5812, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 1247, -4608, 5473, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 1989, -4608, 4949, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3749, -4608, 4464, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -488, 2560, -2305, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 2236, 2559, -1630, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 2884, 2559, -1638, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3444, 806, -2714, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -5893, -1741, 811, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -5201, -1741, 2994, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -5508, -1741, 4148, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -4577, -1741, 4814, 0, 0, 0, 0, bhvTree),
		OBJECT(MODEL_WARIOS_CAP, -5673, -1741, 3427, 0, 180, 0, BPARAM2(0x01), bhvWarioCap),
        TERRAIN(/*terrainData*/ ccm_seg7_area_1_collision),
        MACRO_OBJECTS(/*objList*/ ccm_seg7_area_1_macro_objs),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_048),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, ccm_geo_0005E8),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5837, 7927, -6144, /*angle*/ 0, 90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ WARP_NODE_14,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 1, /*destNode*/ WARP_NODE_14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_CCM,    /*destArea*/ 2, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_65, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        TERRAIN(/*terrainData*/ ccm_seg7_area_2_collision),
        MACRO_OBJECTS(/*objList*/ ccm_seg7_area_2_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -1638, 3253, -2560),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
