// 0x0E000F30
const GeoLayout castle_geo_000F30[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000F70
const GeoLayout castle_geo_000F70[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_basement_stairs_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000F88
const GeoLayout castle_geo_000F88[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_bowser_hallway_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_bowser_painting_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000FA8
const GeoLayout castle_geo_000FA8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_recroom_preview_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000FD0
const GeoLayout castle_geo_000FD0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_bob_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_bob_room_signs_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(0, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001000
const GeoLayout castle_geo_001000[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_wf_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_wf_room_rails_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_wf_room_sign_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(2, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001038
const GeoLayout castle_geo_001038[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part1_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part2_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part3_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_jrb_room_glass_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, dl_castle_aquarium_light),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_jrb_room_sign_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(3, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001088
const GeoLayout castle_geo_001088[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_ccm_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_ccm_room_sign_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_070234C0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_07023520),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(1, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0010C8
const GeoLayout castle_geo_0010C8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_upstairs_preview_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001110
const GeoLayout castle_geo_001110[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_basement_stairs_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001158
const GeoLayout castle_geo_001158[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_bowser_hallway_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_bowser_painting_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0011A8
const GeoLayout castle_geo_0011A8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_recroom_preview_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001200
const GeoLayout castle_geo_001200[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(  0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_bob_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_bob_room_signs_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(256, geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001260
const GeoLayout castle_geo_001260[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(  0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_wf_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_wf_room_rails_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_wf_room_sign_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(258, geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0012C8
const GeoLayout castle_geo_0012C8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(  0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part1_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part2_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_jrb_room_part3_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_jrb_room_glass_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, dl_castle_aquarium_light),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_jrb_room_sign_geo),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(3, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001348
const GeoLayout castle_geo_001348[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(  0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_ccm_room_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_ccm_room_sign_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_070234C0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_07023520),
        GEO_ASM(  0, geo_painting_update),
        GEO_ASM(PAINTING_ID(1, 1), geo_painting_draw),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0013B8
const GeoLayout castle_geo_0013B8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_1_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_rails_geo),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_lobby_part_2_geo),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, castle_lobby_sun_mat_geo),
        GEO_DISPLAY_LIST(LAYER_ALPHA, castle_lobby_peach_painting_geo),
        GEO_ASM(0, geo_exec_inside_castle_light),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_upstairs_preview_geo),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E001400
const GeoLayout castle_geo_001400[] = {
    GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
    GEO_OPEN_NODE(),
        GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
            GEO_NODE_ORTHO(100),
            GEO_OPEN_NODE(),
                GEO_BACKGROUND_COLOR(0x0001),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
        GEO_ZBUFFER(1),
        GEO_OPEN_NODE(),
            GEO_CAMERA_FRUSTUM_WITH_FUNC(64, 50, 7000, geo_camera_fov),
            GEO_OPEN_NODE(),
                GEO_CAMERA(13, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
                GEO_OPEN_NODE(),
                    GEO_SWITCH_CASE(17, geo_switch_area),
                    GEO_OPEN_NODE(),
                        GEO_BRANCH(1, castle_geo_000F30), // 0x0E000F30
                        GEO_BRANCH(1, castle_geo_000F70), // 0x0E000F70
                        GEO_BRANCH(1, castle_geo_000F88), // 0x0E000F88
                        GEO_BRANCH(1, castle_geo_000FA8), // 0x0E000FA8
                        GEO_BRANCH(1, castle_geo_000FD0), // 0x0E000FD0
                        GEO_BRANCH(1, castle_geo_001000), // 0x0E001000
                        GEO_BRANCH(1, castle_geo_001038), // 0x0E001038
                        GEO_BRANCH(1, castle_geo_001088), // 0x0E001088
                        GEO_BRANCH(1, castle_geo_0010C8), // 0x0E0010C8
                        GEO_BRANCH(1, castle_geo_001110), // 0x0E001110
                        GEO_BRANCH(1, castle_geo_001158), // 0x0E001158
                        GEO_BRANCH(1, castle_geo_0011A8), // 0x0E0011A8
                        GEO_BRANCH(1, castle_geo_001200), // 0x0E001200
                        GEO_BRANCH(1, castle_geo_001260), // 0x0E001260
                        GEO_BRANCH(1, castle_geo_0012C8), // 0x0E0012C8
                        GEO_BRANCH(1, castle_geo_001348), // 0x0E001348
                        GEO_BRANCH(1, castle_geo_0013B8), // 0x0E0013B8
                    GEO_CLOSE_NODE(),
                    GEO_RENDER_OBJ(),
                    GEO_ASM(0, geo_envfx_main),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
