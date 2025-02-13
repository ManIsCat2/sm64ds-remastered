#include "src/game/envfx_snow.h"

const GeoLayout cap_box_switch_node_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cap_box_displaylist_mesh_layer_1_mat_override_metal_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout cap_box_switch_node_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cap_box_displaylist_mesh_layer_1_mat_override_vanish_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout cap_box_switch_node_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cap_box_displaylist_mesh_layer_1_mat_override_normal_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout cap_box_switch_node_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cap_box_displaylist_mesh_layer_1_mat_override_question_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout cap_box_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(269),
		GEO_OPEN_NODE(),
			GEO_SHADOW(10, 180, 70),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(5, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, cap_box_displaylist_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, cap_box_switch_node_opt1),
					GEO_BRANCH(1, cap_box_switch_node_opt2),
					GEO_BRANCH(1, cap_box_switch_node_opt3),
					GEO_BRANCH(1, cap_box_switch_node_opt4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};