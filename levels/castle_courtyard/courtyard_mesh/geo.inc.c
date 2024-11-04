#include "src/game/envfx_snow.h"

const GeoLayout courtyard_mesh_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, courtyard_mesh_Visual_Model_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, courtyard_mesh_Visual_Model_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, courtyard_mesh_Visual_Model_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
