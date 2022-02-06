#include "src/game/envfx_snow.h"

const GeoLayout lilmouse_option_000[] = {
	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 0, 90, -90, -90),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 15, 0, NULL),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lilmouse_option_001[] = {
	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 0, 90, -90, -90),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 15, 0, lilmouse_Bone_option1_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lilmouse_option_002[] = {
	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 0, 90, -90, -90),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 15, 0, lilmouse_Bone_option2_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lilmouse_option_003[] = {
	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 0, 90, -90, -90),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 15, 0, lilmouse_Bone_option3_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lilmouse_geo[] = {
	GEO_CULLING_RADIUS(200),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 30, -54, 0, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, 54, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_Bone_001_mesh),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_Bone_002_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 23, 0, 65, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_Bone_002_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_Bone_003_skinned),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 26, 0, 15, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_Bone_003_mesh),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 26, 0, -121, 6, -27),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 35, 0, 51, -28, -49),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_ear2_l_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 26, 0, -121, -6, 27),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 35, 0, 51, 28, 49),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_ear2_r_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 23, 0, 0, 0, -85),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 22, 0, 0, 0, -5),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_arm2_l_mesh),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_arm3_l_skinned),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 11, 0, 0, 0, -5),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_arm3_l_mesh),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 23, 0, 0, 0, 85),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 22, 0, 0, 0, 5),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_arm2_r_mesh),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_arm3_r_skinned),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 11, 0, 0, 0, 5),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_arm3_r_mesh),
											GEO_OPEN_NODE(),
												GEO_SWITCH_CASE(5, geo_switch_anim_state),
												GEO_OPEN_NODE(),
													GEO_NODE_START(),
													GEO_OPEN_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 4, 90, -90, -90),
														GEO_OPEN_NODE(),
															GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_arm3_r_002_mesh),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
													GEO_BRANCH(1, lilmouse_option_000),
													GEO_BRANCH(1, lilmouse_option_001),
													GEO_BRANCH(1, lilmouse_option_002),
													GEO_BRANCH(1, lilmouse_option_003),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, -25, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 27, 0, -11, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_Bone_006_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 23, 0, lilmouse_Bone_006_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_Bone_007_skinned),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 0, 7, 0, 0),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_Bone_007_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, -13, 35, -111),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 27, -16, -90),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_leg2_l_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 33, 0, -13, -35, 111),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 27, 16, 90),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lilmouse_leg2_r_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lilmouse_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};