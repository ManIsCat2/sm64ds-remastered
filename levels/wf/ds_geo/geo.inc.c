#include "src/game/envfx_snow.h"

const GeoLayout wf_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ds_geo_wf_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ds_geo_wf_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ds_geo_wf_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
