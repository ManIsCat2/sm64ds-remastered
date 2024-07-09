#include "src/game/envfx_snow.h"

const GeoLayout geo_menu_player_new_button_a[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_a),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout geo_menu_player_new_button_b[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_b),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout geo_menu_player_new_button_c[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_c),
	GEO_CLOSE_NODE(),
	GEO_END(),
};