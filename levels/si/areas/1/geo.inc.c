#ifndef TARGET_N64
#include "src/game/envfx_skybox.h"
#endif

const GeoLayout si_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
#ifdef TARGET_N64
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
#endif
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_FREE_ROAM, 0, 0, 0, 0, -1024, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_RENDER_OBJ(),
					GEO_ASM(0, geo_envfx_main),
#ifndef TARGET_N64
                    GEO_ASM(0, sky_3d),
#endif
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
