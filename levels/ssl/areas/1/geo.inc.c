// 0x0E000648
const GeoLayout ssl_geo_000648[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(BACKGROUND_DESERT, geo_skybox_main),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 20000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(1, 0, 2000, 6000, -2048, 0, -1024, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, ssl_seg7_dl_07009F48),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, ssl_seg7_dl_0700BA78),
               GEO_DISPLAY_LIST(LAYER_ALPHA, ssl_seg7_dl_0700BC18),
               GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, ssl_seg7_dl_0700BD00),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x0801, geo_movtex_draw_water_regions),
               GEO_ASM(0x0851, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(   0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_cannon_circle_base),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};