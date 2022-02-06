#include "src/game/envfx_snow.h"

const GeoLayout goombaking_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 48, 45, 0, 0, -90, -180),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, goombaking_000_offset_002_mesh_layer_4_mat_override_eyesclosed_0),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout goombaking_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -6, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 6, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, goombaking_000_displaylist_mesh_layer_1),
						GEO_SWITCH_CASE(2, geo_switch_anim_state),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 48, 45, 0, 0, -90, -180),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, goombaking_000_offset_002_mesh_layer_4),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, goombaking_000_switch_opt1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, 45, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -3, 0, goombaking_000_offset_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -60, -16, -45, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -4, 0, goombaking_000_offset_004_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, goombaking_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, goombaking_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};