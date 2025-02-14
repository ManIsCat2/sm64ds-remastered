#include "src/game/envfx_snow.h"

const GeoLayout thwomp_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, thwomp_thwomp_mesh_layer_1_mat_override__2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout thwomp_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, thwomp_thwomp_mesh_layer_1_mat_override__3_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout thwomp_geo[] = {
    GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(10, 180, 300),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(3, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, thwomp_thwomp_mesh_layer_1),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, thwomp_switch_opt1),
				GEO_BRANCH(1, thwomp_switch_opt2),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
