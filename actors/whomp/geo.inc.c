#include "src/game/envfx_snow.h"

const GeoLayout whomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 125, 0, whomp_skl_root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 172, 223, 0, whomp_arm_l_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -172, 234, 0, whomp_arm_r_mesh_layer_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 125, -78, 0, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_leg_l_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -125, -78, 0, 0, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_leg_r_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
