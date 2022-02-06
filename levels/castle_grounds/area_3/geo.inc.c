#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, -100, 200, 3, castle_grounds_dl_AABackground_mesh_layer_0),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -447, 207, 103, castle_grounds_dl_actionfigures_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -323, 174, -640, castle_grounds_dl_bed_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 127, 132, -564, 90, 0, -90, castle_grounds_dl_book_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE_DECAL, -100, 246, -267, 90, 0, 0, castle_grounds_dl_borders_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 275, 50, 13, 90, 0, 0, castle_grounds_dl_cartridges_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 203, 275, -250, castle_grounds_dl_CrtDisplay_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -100, 202, -248, castle_grounds_dl_curtain_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 271, 70, -610, 90, 0, -166, castle_grounds_dl_default_004_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 195, 128, -560, castle_grounds_dl_desk_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 172, 175, -725, 0, 19, 0, castle_grounds_dl_fireflower_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 204, 129, -132, castle_grounds_dl_hat_nintendo64_color_png_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -100, 200, 3, castle_grounds_dl_main_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -461, 187, 105, castle_grounds_dl_maincupbaord_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 225, 70, -250, castle_grounds_dl_n64case_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -100, 200, 3, castle_grounds_dl_N64Logo_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -100, 200, 3, castle_grounds_dl_pathtohouse_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 254, 197, -655, 90, 0, 0, castle_grounds_dl_pPlane1_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 274, 74, -735, -90, 0, 0, castle_grounds_dl_raquet_mesh),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -423, 101, -231, 0, -90, 0, castle_grounds_dl_skChairsRedCouchmesh_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -1100, 128, 1385, castle_grounds_dl_ZZbush_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -100, 200, 3, castle_grounds_dl_ZZZmain_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_3[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 10000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 6626, 0, 19891, 6626, -1, 19891, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_3_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};