#ifndef TARGET_N64
#include "src/game/envfx_skybox.h"
#endif

// 0x0E00073C
const GeoLayout castle_grounds_area_1[] = {
    GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
    GEO_OPEN_NODE(),
        GEO_ZBUFFER(1),
        GEO_OPEN_NODE(),
            GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 20000, geo_camera_fov),
            GEO_OPEN_NODE(),
                GEO_CAMERA(16, 0, 1500, 2500, 0, 1500, -12000, geo_camera_main),
                GEO_OPEN_NODE(),
                    GEO_DISPLAY_LIST(LAYER_OPAQUE, ds_mesh_Castle_Grounds_mesh_layer_1),
                    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ds_mesh_Castle_Grounds_mesh_layer_5),
                    GEO_DISPLAY_LIST(LAYER_ALPHA, ds_mesh_Castle_Grounds_mesh_layer_4),
                    GEO_ASM(   0, geo_movtex_pause_control),
                    GEO_ASM(0x1601, geo_movtex_draw_water_regions),
                    GEO_RENDER_OBJ(),
                    GEO_ASM(0, geo_envfx_main),
#ifndef TARGET_N64
                    GEO_ASM(0, sky_3d),
#endif
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
        GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_cannon_circle_base),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
