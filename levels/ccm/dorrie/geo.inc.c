#include "src/game/envfx_snow.h"

const GeoLayout dorrie_geo[] = {
	GEO_CULLING_RADIUS(3000),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(5000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_002_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 1295, 0, 0, dorrie_000_offset_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_003_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 916, 0, 0, dorrie_000_offset_003_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_004_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 874, 0, 0, dorrie_000_offset_004_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_ALPHA, dorrie_000_displaylist_mesh_layer_4),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_005_skinned_mesh_layer_1),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 30, 444, -6, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_005_mesh_layer_1),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_006_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -893, -490, -6, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_006_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_000_offset_007_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1300, 0, 0, dorrie_000_offset_007_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1086, 91, -700, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_008_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 902, 700, -785, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_009_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -1086, 91, 698, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_010_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 902, 700, 783, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, dorrie_000_offset_011_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, dorrie_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, dorrie_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};