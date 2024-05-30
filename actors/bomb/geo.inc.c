#include "src/game/envfx_snow.h"

const GeoLayout bowser_bomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bomb_body_mesh_layer_5),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bomb_spikes_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
