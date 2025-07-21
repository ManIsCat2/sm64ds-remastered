#include "src/game/envfx_snow.h"

const GeoLayout file_options_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_options),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
