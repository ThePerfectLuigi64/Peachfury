#include "src/game/envfx_snow.h"

const GeoLayout yoshiDipshit1_geo[] = {
	GEO_CULLING_RADIUS(700),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 105, 42, yoshiDipshit1_Bone_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_Bone_001_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 24, -72, yoshiDipshit1_Bone_001_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_Bone_002_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 11, -72, yoshiDipshit1_Bone_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_Bone_008_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 51, 72, NULL),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 69, -37, yoshiDipshit1_Bone_008_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, yoshiDipshit1_Bone_008_mesh_layer_4),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, yoshiDipshit1_Bone_008_mesh_layer_6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_shoulder_l_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 25, 65, 7, yoshiDipshit1_shoulder_l_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_arm_l_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 26, -15, -2, yoshiDipshit1_arm_l_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_shoulder_r_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -25, 65, 7, yoshiDipshit1_shoulder_r_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_arm_r_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -26, -15, -2, yoshiDipshit1_arm_r_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_thigh_l_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 41, 24, -40, yoshiDipshit1_thigh_l_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_leg_l_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -59, 10, yoshiDipshit1_leg_l_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_foot_l_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -10, -63, -42, yoshiDipshit1_foot_l_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_thigh_r_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -41, 24, -40, yoshiDipshit1_thigh_r_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_leg_r_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -59, 10, yoshiDipshit1_leg_r_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_foot_r_skinned_mesh_layer_1),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 10, -63, -42, yoshiDipshit1_foot_r_mesh_layer_1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, yoshiDipshit1_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, yoshiDipshit1_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, yoshiDipshit1_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};