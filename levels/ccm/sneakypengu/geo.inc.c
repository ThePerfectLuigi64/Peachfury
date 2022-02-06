#include "src/game/envfx_snow.h"

const GeoLayout sneakypengu_Bone_001_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 72, 0, sneakypengu_Bone_002_mesh_layer_1_mat_override_f3d_material_008_0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, sneakypengu_Bone_002_mesh_layer_4_mat_override_f3d_material_008_0),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sneakypengu_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sneakypengu_Bone_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 72, 0, sneakypengu_Bone_002_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, sneakypengu_Bone_002_mesh_layer_4),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, sneakypengu_Bone_001_opt1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 61, 0, 0, -7, -90),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 27, 0, -1, 3, -61),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sneakypengu_flip_r_mesh_layer_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 61, 0, 0, 7, 90),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 27, 0, -1, -3, 61),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sneakypengu_flip_l_mesh_layer_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 61, 0, 162, 90, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 58, 0, -1, -4, 80),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sneakypengu_foot_l_mesh_layer_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 61, 0, 162, -90, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 58, 0, -1, 4, -80),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sneakypengu_foot_r_mesh_layer_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sneakypengu_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, sneakypengu_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};