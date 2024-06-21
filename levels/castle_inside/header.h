#ifndef CASTLE_INSIDE_HEADER_H
#define CASTLE_INSIDE_HEADER_H

#include "types.h"
#include "game/paintings.h"
#include "game/moving_texture.h"

// geo
extern const GeoLayout castle_geo_000F00[];
extern const GeoLayout castle_geo_000F18[];
extern const GeoLayout castle_geo_000F30[];
extern const GeoLayout castle_geo_000F70[];
extern const GeoLayout castle_geo_000F88[];
extern const GeoLayout castle_geo_000FA8[];
extern const GeoLayout castle_geo_000FD0[];
extern const GeoLayout castle_geo_001000[];
extern const GeoLayout castle_geo_001038[];
extern const GeoLayout castle_geo_001088[];
extern const GeoLayout castle_geo_0010C8[];
extern const GeoLayout castle_geo_001110[];
extern const GeoLayout castle_geo_001158[];
extern const GeoLayout castle_geo_0011A8[];
extern const GeoLayout castle_geo_001200[];
extern const GeoLayout castle_geo_001260[];
extern const GeoLayout castle_geo_0012C8[];
extern const GeoLayout castle_geo_001348[];
extern const GeoLayout castle_geo_0013B8[];
extern const GeoLayout castle_geo_001400[];
extern const GeoLayout castle_geo_001518[];
extern const GeoLayout castle_geo_001530[];
extern const GeoLayout castle_geo_001548[];
extern const GeoLayout castle_geo_001560[];
extern const GeoLayout castle_geo_001578[];
extern const GeoLayout castle_geo_0015B8[];
extern const GeoLayout castle_geo_0015F8[];
extern const GeoLayout castle_geo_001628[];
extern const GeoLayout castle_geo_001668[];
extern const GeoLayout castle_geo_001690[];
extern const GeoLayout castle_geo_0016D8[];
extern const GeoLayout castle_geo_001740[];
extern const GeoLayout castle_geo_001798[];
extern const GeoLayout castle_geo_001800[];
extern const GeoLayout castle_geo_001858[];
extern const GeoLayout castle_geo_001940[];
extern const GeoLayout castle_geo_001958[];
extern const GeoLayout castle_geo_001980[];
extern const GeoLayout castle_geo_0019C8[];
extern const GeoLayout castle_geo_0019F8[];
extern const GeoLayout castle_geo_001A30[];
extern const GeoLayout castle_geo_001A58[];
extern const GeoLayout castle_geo_001AB8[];
extern const GeoLayout castle_geo_001AF8[];
extern const GeoLayout castle_geo_001B48[];
extern const GeoLayout castle_geo_001BB0[];
extern const GeoLayout castle_geo_001C10[];

// leveldata
extern const Gfx inside_castle_seg7_dl_070225D8[];
extern const Gfx inside_castle_seg7_dl_07022610[];
extern const Gfx inside_castle_seg7_dl_070234C0[];
extern const Gfx inside_castle_seg7_dl_07023520[];
extern struct Painting bob_painting;
extern struct Painting ccm_painting;
extern struct Painting wf_painting;
extern struct Painting jrb_painting;
extern struct Painting lll_painting;
extern struct Painting ssl_painting;
extern struct Painting hmc_painting;
extern struct Painting ddd_painting;
extern struct Painting wdw_painting;
extern struct Painting thi_tiny_painting;
extern struct Painting ttm_painting;
extern struct Painting ttc_painting;
extern struct Painting sl_painting;
extern struct Painting thi_huge_painting;
extern const Gfx peach_bowser_painting_geo[];
extern const Vtx inside_castle_seg7_vertex_07030940[];
extern const Gfx inside_castle_seg7_dl_07031168[];
extern const Gfx inside_castle_seg7_dl_0703BCB8[];
extern const Gfx inside_castle_seg7_dl_0703BFA8[];
extern const Gfx inside_castle_seg7_dl_0703E6F0[];
extern const Gfx inside_castle_seg7_dl_07043028[];
extern const Gfx inside_castle_seg7_dl_07043B48[];
extern const Gfx inside_castle_seg7_dl_07043CD8[];
extern const Gfx inside_castle_seg7_dl_0704A0E8[];
extern const Gfx inside_castle_seg7_dl_0704A2E0[];
extern const Gfx inside_castle_seg7_dl_0704AA98[];
extern const Gfx inside_castle_seg7_dl_0704C7D8[];
extern const Gfx inside_castle_seg7_dl_07050938[];
extern const Gfx inside_castle_seg7_dl_070512F8[];
extern const Gfx inside_castle_seg7_dl_07051678[];
extern const Gfx inside_castle_seg7_dl_070519C8[];
extern const Gfx inside_castle_seg7_dl_07051B60[];
extern const Gfx inside_castle_seg7_dl_070558D0[];
extern const Gfx inside_castle_seg7_dl_070572A0[];
extern const Gfx inside_castle_seg7_dl_07057F00[];
extern const Gfx inside_castle_seg7_dl_07058950[];
extern const Gfx inside_castle_seg7_dl_07059190[];
extern const Gfx inside_castle_seg7_dl_0705E088[];
extern const Gfx inside_castle_seg7_dl_0705E2A0[];
extern const Gfx inside_castle_seg7_dl_0705E450[];
extern const Gfx inside_castle_seg7_dl_070616E8[];
extern const Gfx inside_castle_seg7_dl_07061C20[];
extern const Gfx inside_castle_seg7_dl_07064B78[];
extern const Gfx inside_castle_seg7_dl_07064D58[];
extern const Gfx inside_castle_seg7_dl_07066CE0[];
extern const Gfx inside_castle_seg7_dl_07066E90[];
extern const Gfx inside_castle_seg7_dl_07066FA0[];
extern const Gfx inside_castle_seg7_dl_07068850[];
extern const Gfx inside_castle_seg7_dl_07068B10[];
extern const Collision inside_castle_seg7_area_1_collision[];
extern const Collision inside_castle_seg7_area_2_collision[];
extern const Collision inside_castle_seg7_area_3_collision[];
extern const Collision inside_castle_seg7_collision_ddd_warp[];
extern const Collision inside_castle_seg7_collision_ddd_warp_2[];
extern const MacroObject inside_castle_seg7_area_1_macro_objs[];
extern const MacroObject inside_castle_seg7_area_2_macro_objs[];
extern const MacroObject inside_castle_seg7_area_3_macro_objs[];
extern const RoomData inside_castle_seg7_area_1_rooms[];
extern const RoomData inside_castle_seg7_area_2_rooms[];
extern const RoomData inside_castle_seg7_area_3_rooms[];
extern const Collision inside_castle_seg7_collision_floor_trap[];
extern const Collision inside_castle_seg7_collision_star_door[];
extern const Collision inside_castle_seg7_collision_water_level_pillar[];
extern const Trajectory *const inside_castle_seg7_trajectory_mips[];
extern const Trajectory *const castle_grounds_trajectory_mips[];
extern const struct MovtexQuadCollection inside_castle_movtex_green_room_water[];
extern const struct MovtexQuadCollection inside_castle_movtex_moat_water[];

// script
extern const LevelScript level_castle_inside_entry[];

#include "levels/castle_inside/castle_lobby_part_1_geo/header.h"

#include "levels/castle_inside/castle_lobby_rails_geo/header.h"

#include "levels/castle_inside/castle_lobby_part_2_geo/header.h"

#include "levels/castle_inside/dl_castle_lobby_wing_cap_light/header.h"

#include "levels/castle_inside/castle_lobby_sun_mat_geo/header.h"

#include "levels/castle_inside/castle_lobby_peach_painting_geo/header.h"

#include "levels/castle_inside/castle_basement_stairs_geo/header.h"

#include "levels/castle_inside/castle_bowser_hallway_geo/header.h"

#include "levels/castle_inside/castle_recroom_preview_geo/header.h"

#include "levels/castle_inside/castle_bob_room_geo/header.h"

#include "levels/castle_inside/castle_bob_room_signs_geo/header.h"

#include "levels/castle_inside/castle_wf_room_geo/header.h"

#include "levels/castle_inside/castle_wf_room_rails_geo/header.h"

#include "levels/castle_inside/castle_wf_room_sign_geo/header.h"

#include "levels/castle_inside/castle_jrb_room_part1_geo/header.h"

#include "levels/castle_inside/castle_jrb_room_part2_geo/header.h"

#include "levels/castle_inside/castle_jrb_room_part3_geo/header.h"

#include "levels/castle_inside/castle_jrb_room_glass_geo/header.h"

#include "levels/castle_inside/dl_castle_aquarium_light/header.h"

#include "levels/castle_inside/castle_jrb_room_sign_geo/header.h"

#include "levels/castle_inside/castle_ccm_room_geo/header.h"

#include "levels/castle_inside/castle_ccm_room_sign_geo/header.h"

#include "levels/castle_inside/castle_upstairs_preview_geo/header.h"

#endif
