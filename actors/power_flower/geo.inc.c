#include "src/game/envfx_snow.h"

const GeoLayout power_flower_power_flower_open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, power_flower_switch_option_displaylist_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, power_flower_switch_option_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout power_flower_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(431),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 180, 70),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, power_flower_displaylist_mesh_layer_1),
						GEO_DISPLAY_LIST(LAYER_ALPHA, power_flower_displaylist_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, power_flower_power_flower_open),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
