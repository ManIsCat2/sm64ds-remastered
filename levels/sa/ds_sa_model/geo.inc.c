#include "src/game/envfx_snow.h"

const GeoLayout ds_sa_model_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ds_sa_model_level_model_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ds_sa_model_level_model_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ds_sa_model_final_revert_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ds_sa_model_final_revert_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
