#include "src/game/envfx_snow.h"

const GeoLayout buzzy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, -90, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_Bone_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_Bone_001_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 0, 0, -102),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_Bone_001_mesh),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 0, 0, 110),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, 0, 0, -23),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_Bone_005_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 137, -59, 70),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_behindleg_l_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 47, 0, 43, -31, -70),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_behindleg_l_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 43, 59, 110),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_behindleg_r_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 47, 0, 43, 31, 70),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_behindleg_r_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 62, -69, 135),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_foreleg_l_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 36, 0, 62, 28, 45),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_foreleg_l_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 45, 0, 118, 69, 45),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_foreleg_r_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 36, 0, 62, -28, -45),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, buzzy_foreleg_r_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, buzzy_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};