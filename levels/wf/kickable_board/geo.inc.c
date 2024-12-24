const GeoLayout wf_kickable_board_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, kickable_board_kickable_board_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout wf_kickable_board_felled_geo[] = {
    GEO_CULLING_RADIUS(2500),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, kickable_board_kickable_board_mesh_layer_1),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
