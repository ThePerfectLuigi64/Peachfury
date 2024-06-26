#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_AAAAAcorals_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_domeinside1_Alphacpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_domeinside1_SOLIDcpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_domeinside1_SOLIDLIGHTScpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_domeinside1cpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_domeinside2_Alphacpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_domeinside2_SOLIDcpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_domeinside2_SOLIDLIGHTScpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_domeinside2cpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_domeinside3_SOLIDcpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_domeinside3cpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_EDomes_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_FBridges_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_FBridges_001_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_freeplaysub_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Frocks_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_Frocks_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_FSTAR1DOME_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_REDCOINDOMEinside_ALPHAcpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_REDCOINDOMEinside_solid2cpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_REDCOINDOMEinsidecpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_STAR4domeinside_solidcpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_STAR4domeinsidecpucull_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_ZZZZZZmaingeometry_mesh),
		GEO_DISPLAY_LIST(LAYER_FORCE, wf_dl_ZZZZZZmaingeometry_001_mesh_layer_0),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_ZZZZZZmaingeometry_002_mesh_layer_6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
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
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 120, 36000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -1, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_WATER, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
