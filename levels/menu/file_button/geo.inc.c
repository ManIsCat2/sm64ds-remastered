#include "src/game/envfx_snow.h"

const GeoLayout geo_menu_rec_room[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, rec_room_button),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout geo_menu_file_a[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_a),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout geo_menu_file_b[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_b),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout geo_menu_file_c[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, file_c),
	GEO_CLOSE_NODE(),
	GEO_END(),
};