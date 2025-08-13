#include "src/game/envfx_snow.h"

const GeoLayout ship_inside_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ship_inside_jrb_ship_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ship_inside_jrb_ship_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ship_inside_final_revert_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ship_inside_final_revert_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
