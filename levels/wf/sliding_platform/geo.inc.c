#include "src/game/envfx_snow.h"

const GeoLayout wf_sliding_platform_geo[] = {
	GEO_CULLING_RADIUS(500),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sliding_platform_wf_sliding_platform_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
