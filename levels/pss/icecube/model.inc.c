Lights1 icecube_f3d_material_002_lights = gdSPDefLights1(
	0x19, 0x19, 0x19,
	0x32, 0x32, 0x32, 0x28, 0x28, 0x28);

Lights1 icecube_f3d_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx icecube_mado_ice_ci8_aligner[] = {gsSPEndDisplayList()};
u8 icecube_mado_ice_ci8[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 
	0x05, 0x06, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 
	0x09, 0x0a, 0x0a, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 
	0x0f, 0x0f, 0x10, 0x10, 0x11, 0x12, 0x13, 0x13, 
	0x14, 0x14, 0x14, 0x00, 0x02, 0x02, 0x02, 0x03, 
	0x05, 0x15, 0x07, 0x07, 0x08, 0x08, 0x08, 0x16, 
	0x09, 0x0a, 0x0a, 0x0a, 0x0b, 0x0c, 0x0d, 0x0d, 
	0x0f, 0x0f, 0x10, 0x10, 0x11, 0x12, 0x13, 0x13, 
	0x14, 0x14, 0x14, 0x17, 0x03, 0x03, 0x02, 0x03, 
	0x05, 0x06, 0x06, 0x06, 0x18, 0x16, 0x16, 0x18, 
	0x19, 0x19, 0x19, 0x0a, 0x0c, 0x0d, 0x0d, 0x0d, 
	0x0f, 0x0f, 0x10, 0x1a, 0x12, 0x13, 0x13, 0x13, 
	0x14, 0x00, 0x00, 0x17, 0x02, 0x02, 0x02, 0x03, 
	0x05, 0x06, 0x06, 0x15, 0x18, 0x16, 0x1b, 0x1b, 
	0x19, 0x19, 0x0a, 0x1c, 0x0e, 0x0d, 0x0d, 0x0d, 
	0x0f, 0x10, 0x1a, 0x1d, 0x12, 0x1e, 0x1e, 0x12, 
	0x1f, 0x02, 0x02, 0x1f, 0x02, 0x02, 0x02, 0x20, 
	0x21, 0x22, 0x16, 0x16, 0x23, 0x24, 0x25, 0x25, 
	0x26, 0x26, 0x27, 0x28, 0x0e, 0x0d, 0x0d, 0x0e, 
	0x29, 0x29, 0x29, 0x2a, 0x2b, 0x2c, 0x2c, 0x2d, 
	0x02, 0x2e, 0x2e, 0x02, 0x02, 0x20, 0x2f, 0x06, 
	0x22, 0x16, 0x16, 0x30, 0x23, 0x25, 0x25, 0x25, 
	0x27, 0x31, 0x28, 0x28, 0x0d, 0x0c, 0x0d, 0x0e, 
	0x32, 0x32, 0x32, 0x29, 0x33, 0x33, 0x2b, 0x2d, 
	0x2e, 0x2e, 0x2e, 0x2e, 0x20, 0x2f, 0x06, 0x06, 
	0x16, 0x16, 0x30, 0x16, 0x24, 0x25, 0x25, 0x34, 
	0x27, 0x31, 0x28, 0x28, 0x0c, 0x0c, 0x0d, 0x0e, 
	0x25, 0x25, 0x25, 0x29, 0x2c, 0x2b, 0x2d, 0x2d, 
	0x2e, 0x2c, 0x2c, 0x2c, 0x2f, 0x06, 0x06, 0x06, 
	0x16, 0x16, 0x16, 0x22, 0x25, 0x25, 0x34, 0x34, 
	0x27, 0x31, 0x31, 0x31, 0x0b, 0x0b, 0x0b, 0x0c, 
	0x25, 0x25, 0x25, 0x29, 0x2b, 0x2d, 0x2d, 0x2d, 
	0x35, 0x35, 0x36, 0x36, 0x2f, 0x06, 0x06, 0x06, 
	0x37, 0x37, 0x37, 0x37, 0x38, 0x39, 0x3a, 0x3a, 
	0x3a, 0x3b, 0x3c, 0x3b, 0x3d, 0x3d, 0x3d, 0x3e, 
	0x25, 0x25, 0x32, 0x29, 0x03, 0x03, 0x03, 0x03, 
	0x35, 0x36, 0x36, 0x3f, 0x06, 0x06, 0x06, 0x2f, 
	0x40, 0x40, 0x40, 0x40, 0x41, 0x39, 0x3a, 0x3a, 
	0x3a, 0x3c, 0x3c, 0x3a, 0x3d, 0x3d, 0x3d, 0x3d, 
	0x25, 0x29, 0x2a, 0x2a, 0x03, 0x03, 0x04, 0x04, 
	0x35, 0x36, 0x3f, 0x42, 0x06, 0x06, 0x2f, 0x20, 
	0x43, 0x44, 0x44, 0x43, 0x41, 0x39, 0x3a, 0x3a, 
	0x3b, 0x45, 0x45, 0x3b, 0x3d, 0x3d, 0x3e, 0x3e, 
	0x25, 0x29, 0x2a, 0x2a, 0x03, 0x04, 0x05, 0x05, 
	0x36, 0x3f, 0x42, 0x42, 0x06, 0x2f, 0x20, 0x02, 
	0x44, 0x44, 0x44, 0x40, 0x39, 0x3a, 0x3a, 0x3a, 
	0x3c, 0x45, 0x45, 0x3c, 0x3e, 0x39, 0x46, 0x46, 
	0x29, 0x2a, 0x2a, 0x2a, 0x04, 0x05, 0x05, 0x05, 
	0x47, 0x48, 0x49, 0x48, 0x4a, 0x33, 0x2d, 0x2d, 
	0x44, 0x44, 0x43, 0x37, 0x4b, 0x0a, 0x4b, 0x4b, 
	0x4c, 0x4c, 0x4c, 0x4c, 0x0f, 0x10, 0x1a, 0x1d, 
	0x35, 0x35, 0x35, 0x36, 0x4d, 0x4e, 0x4d, 0x4d, 
	0x48, 0x49, 0x49, 0x48, 0x4a, 0x33, 0x2d, 0x2d, 
	0x44, 0x43, 0x40, 0x37, 0x0a, 0x0a, 0x4b, 0x27, 
	0x4c, 0x4c, 0x4f, 0x4f, 0x0f, 0x1a, 0x1d, 0x1d, 
	0x35, 0x35, 0x36, 0x25, 0x50, 0x50, 0x4e, 0x4e, 
	0x48, 0x48, 0x48, 0x48, 0x16, 0x33, 0x2d, 0x2d, 
	0x43, 0x40, 0x37, 0x37, 0x0a, 0x0a, 0x4b, 0x1c, 
	0x4f, 0x51, 0x51, 0x4f, 0x0f, 0x1d, 0x1d, 0x1a, 
	0x35, 0x35, 0x36, 0x25, 0x50, 0x50, 0x52, 0x52, 
	0x53, 0x53, 0x53, 0x48, 0x16, 0x4a, 0x33, 0x33, 
	0x40, 0x37, 0x37, 0x37, 0x0a, 0x0a, 0x4b, 0x1c, 
	0x4f, 0x51, 0x51, 0x54, 0x10, 0x1a, 0x1a, 0x1a, 
	0x35, 0x36, 0x32, 0x25, 0x50, 0x50, 0x52, 0x52, 
	0x55, 0x56, 0x56, 0x56, 0x3d, 0x39, 0x46, 0x46, 
	0x1c, 0x4b, 0x0a, 0x0a, 0x57, 0x57, 0x57, 0x1b, 
	0x25, 0x25, 0x25, 0x32, 0x33, 0x58, 0x1a, 0x58, 
	0x21, 0x59, 0x22, 0x22, 0x5a, 0x5a, 0x5a, 0x5a, 
	0x55, 0x56, 0x56, 0x16, 0x3d, 0x39, 0x46, 0x39, 
	0x27, 0x0a, 0x0a, 0x0a, 0x57, 0x57, 0x1b, 0x5b, 
	0x32, 0x32, 0x5c, 0x5d, 0x58, 0x1a, 0x1a, 0x33, 
	0x59, 0x5e, 0x22, 0x22, 0x5a, 0x5f, 0x5f, 0x5a, 
	0x56, 0x16, 0x16, 0x16, 0x3d, 0x39, 0x39, 0x3e, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x57, 0x1b, 0x5b, 0x38, 
	0x32, 0x32, 0x5c, 0x5d, 0x1a, 0x1a, 0x58, 0x60, 
	0x5e, 0x22, 0x22, 0x22, 0x61, 0x61, 0x5f, 0x5a, 
	0x16, 0x57, 0x57, 0x57, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x57, 0x5b, 0x38, 0x38, 
	0x32, 0x5c, 0x5c, 0x5d, 0x58, 0x58, 0x33, 0x60, 
	0x5e, 0x22, 0x22, 0x22, 0x61, 0x61, 0x5f, 0x5a, 
	0x4b, 0x1c, 0x4b, 0x0a, 0x62, 0x62, 0x62, 0x62, 
	0x63, 0x63, 0x63, 0x63, 0x22, 0x21, 0x21, 0x59, 
	0x64, 0x64, 0x64, 0x5d, 0x33, 0x33, 0x4a, 0x4a, 
	0x4f, 0x4f, 0x4f, 0x65, 0x66, 0x66, 0x67, 0x67, 
	0x27, 0x1c, 0x27, 0x0a, 0x62, 0x62, 0x62, 0x62, 
	0x68, 0x68, 0x69, 0x63, 0x5e, 0x21, 0x21, 0x5e, 
	0x6a, 0x64, 0x64, 0x6b, 0x33, 0x4a, 0x4a, 0x4a, 
	0x65, 0x6c, 0x4f, 0x65, 0x67, 0x67, 0x67, 0x66, 
	0x4b, 0x27, 0x4b, 0x27, 0x62, 0x6d, 0x6d, 0x6e, 
	0x6f, 0x6f, 0x69, 0x69, 0x21, 0x21, 0x5e, 0x22, 
	0x6a, 0x6a, 0x64, 0x5d, 0x4a, 0x4a, 0x16, 0x16, 
	0x70, 0x6c, 0x4f, 0x70, 0x67, 0x67, 0x66, 0x71, 
	0x0a, 0x4b, 0x1c, 0x1c, 0x6d, 0x6e, 0x2a, 0x2a, 
	0x6f, 0x6f, 0x68, 0x68, 0x21, 0x21, 0x22, 0x22, 
	0x6a, 0x6a, 0x6a, 0x6a, 0x16, 0x16, 0x16, 0x16, 
	0x70, 0x4f, 0x4f, 0x70, 0x67, 0x66, 0x71, 0x0c, 
	0x72, 0x72, 0x73, 0x74, 0x75, 0x76, 0x76, 0x02, 
	0x6f, 0x77, 0x78, 0x78, 0x79, 0x7a, 0x7b, 0x30, 
	0x66, 0x71, 0x71, 0x66, 0x5a, 0x5a, 0x5a, 0x5a, 
	0x70, 0x7c, 0x7c, 0x70, 0x7d, 0x7d, 0x0d, 0x0d, 
	0x72, 0x73, 0x74, 0x7e, 0x76, 0x7f, 0x76, 0x02, 
	0x77, 0x77, 0x77, 0x78, 0x79, 0x7b, 0x30, 0x30, 
	0x66, 0x66, 0x66, 0x67, 0x5a, 0x5a, 0x5a, 0x5f, 
	0x70, 0x7c, 0x80, 0x80, 0x7d, 0x0d, 0x0d, 0x46, 
	0x73, 0x74, 0x7e, 0x7e, 0x7f, 0x7f, 0x76, 0x02, 
	0x6f, 0x6f, 0x77, 0x68, 0x7a, 0x30, 0x30, 0x30, 
	0x67, 0x66, 0x67, 0x67, 0x5f, 0x5f, 0x5f, 0x5f, 
	0x80, 0x80, 0x80, 0x7c, 0x0d, 0x0d, 0x46, 0x46, 
	0x74, 0x7e, 0x7e, 0x7e, 0x7f, 0x7f, 0x76, 0x76, 
	0x6f, 0x77, 0x78, 0x68, 0x7b, 0x30, 0x30, 0x30, 
	0x67, 0x67, 0x67, 0x67, 0x5f, 0x5f, 0x5f, 0x61, 
	0x80, 0x80, 0x7c, 0x81, 0x46, 0x46, 0x82, 0x82, 
	0x02, 0x76, 0x7f, 0x7f, 0x44, 0x44, 0x44, 0x43, 
	0x35, 0x36, 0x3f, 0x42, 0x83, 0x84, 0x84, 0x83, 
	0x55, 0x85, 0x85, 0x85, 0x5a, 0x5a, 0x66, 0x6c, 
	0x86, 0x86, 0x5c, 0x28, 0x73, 0x2b, 0x87, 0x87, 
	0x76, 0x7f, 0x7f, 0x7f, 0x44, 0x44, 0x43, 0x43, 
	0x36, 0x3f, 0x42, 0x42, 0x84, 0x83, 0x88, 0x88, 
	0x55, 0x85, 0x89, 0x89, 0x5a, 0x5a, 0x66, 0x0c, 
	0x5c, 0x5c, 0x28, 0x28, 0x2b, 0x87, 0x8a, 0x87, 
	0x76, 0x7f, 0x7f, 0x7f, 0x44, 0x43, 0x40, 0x40, 
	0x3f, 0x42, 0x42, 0x42, 0x84, 0x88, 0x8b, 0x8b, 
	0x55, 0x89, 0x57, 0x57, 0x5a, 0x66, 0x6c, 0x0c, 
	0x5c, 0x28, 0x28, 0x8c, 0x2b, 0x87, 0x8a, 0x8a, 
	0x76, 0x76, 0x76, 0x76, 0x44, 0x43, 0x40, 0x37, 
	0x42, 0x42, 0x42, 0x42, 0x83, 0x8b, 0x8b, 0x8b, 
	0x85, 0x89, 0x57, 0x57, 0x66, 0x6c, 0x0c, 0x0c, 
	0x28, 0x28, 0x8c, 0x8c, 0x87, 0x8a, 0x8a, 0x8a, 
	
};

Gfx icecube_mado_ice_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 icecube_mado_ice_ci8_pal_rgba16[] = {
	0xd6, 0xf9, 0xd6, 0xb9, 0xbe, 0x79, 0xad, 0xf7, 
	0x8c, 0xb1, 0x74, 0x6f, 0x3a, 0xa7, 0x19, 0xe5, 
	0x12, 0x27, 0x1a, 0xeb, 0x2b, 0x6d, 0x43, 0xaf, 
	0x4c, 0x31, 0x54, 0x71, 0x64, 0xf5, 0x64, 0xb5, 
	0x85, 0x77, 0x9d, 0xf7, 0xbe, 0xb9, 0xd7, 0x3b, 
	0xe7, 0x7d, 0x4b, 0x6b, 0x22, 0x67, 0xce, 0x77, 
	0x2a, 0xe9, 0x22, 0xe9, 0xa6, 0x39, 0x43, 0x6b, 
	0x4c, 0x71, 0xbe, 0xbb, 0xae, 0x37, 0xd6, 0xfb, 
	0x9d, 0x75, 0x7c, 0xb1, 0x43, 0x2b, 0x1a, 0x67, 
	0x2a, 0xa9, 0x4b, 0xed, 0x33, 0x29, 0x3b, 0xef, 
	0x5c, 0xf5, 0x8d, 0x75, 0xae, 0x79, 0x95, 0xb7, 
	0x95, 0x35, 0xae, 0x39, 0xa5, 0xf7, 0x74, 0x6d, 
	0x11, 0xe5, 0x44, 0xb3, 0x6c, 0xb1, 0x84, 0xf5, 
	0x2b, 0xaf, 0x9d, 0xb7, 0x84, 0xb3, 0x5b, 0xab, 
	0x7c, 0x6f, 0x54, 0x2f, 0x23, 0x6f, 0x33, 0xaf, 
	0x3c, 0x31, 0x2b, 0x29, 0x43, 0xad, 0x53, 0x69, 
	0x94, 0xf3, 0x84, 0xf1, 0x21, 0xa5, 0xbe, 0x37, 
	0xdf, 0x3b, 0x54, 0xb3, 0x6c, 0xb5, 0x42, 0xa9, 
	0x19, 0xa5, 0x11, 0x23, 0x4b, 0xaf, 0x33, 0xad, 
	0x44, 0x73, 0x63, 0xaf, 0x4a, 0xeb, 0x4b, 0xef, 
	0x3a, 0x6b, 0x43, 0xab, 0x21, 0xe9, 0x19, 0xeb, 
	0x5c, 0x6f, 0x09, 0xe9, 0x1a, 0x27, 0x2b, 0x2b, 
	0x95, 0x75, 0x63, 0xed, 0x22, 0x6b, 0x5b, 0xed, 
	0x4c, 0xb3, 0x75, 0x37, 0x53, 0xad, 0x22, 0xab, 
	0x6c, 0xb3, 0x2b, 0x2d, 0x33, 0xef, 0x3b, 0x6b, 
	0x44, 0xb5, 0x3b, 0x2d, 0x2a, 0xed, 0x1a, 0x6b, 
	0x84, 0xb1, 0x6c, 0x2d, 0x3b, 0x6f, 0x8d, 0xfb, 
	0x3b, 0x6d, 0x64, 0xb1, 0x85, 0x35, 0xb6, 0x37, 
	0x32, 0xed, 0x33, 0x6d, 0x4b, 0xf1, 0x7d, 0x37, 
	0x9e, 0x3b, 0xa6, 0x7b, 0xce, 0xfb, 0x9d, 0x73, 
	0x95, 0x33, 0x8c, 0xf1, 0x5b, 0xeb, 0x3a, 0xe9, 
	0x43, 0xf1, 0x33, 0x6f, 0xc6, 0xfd, 0xdf, 0x7d, 
	0x33, 0x2f, 0x54, 0xb5, 0x95, 0xf9, 0x09, 0x65, 
	0x09, 0x25, 0x12, 0x29, 0x33, 0xf1, 0x9d, 0xf9, 
	0x11, 0x65, 0x1a, 0xa9, 0xb6, 0xbb, 0x19, 0xe9, 
	0x7d, 0xb9, 
};

Gfx icecube_SUPER_MARIO_64_FE55B4F9_3_2_all_ia8_aligner[] = {gsSPEndDisplayList()};
u8 icecube_SUPER_MARIO_64_FE55B4F9_3_2_all_ia8[] = {
	0xd1, 0xd2, 0xd4, 0xd5, 0xd6, 0xd6, 0xd5, 0xd5, 
	0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd2, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd6, 0xd5, 0xd4, 
	0xd1, 0xd3, 0xd7, 0xd9, 0xd9, 0xd9, 0xd8, 0xd8, 
	0xd7, 0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 0xd7, 
	0xd7, 0xd8, 0xd8, 0xd9, 0xd9, 0xd9, 0xd9, 0xd7, 
	0xd3, 0xd6, 0xdb, 0xdd, 0xdd, 0xdc, 0xdc, 0xdb, 
	0xda, 0xda, 0xd9, 0xd8, 0xd8, 0xd8, 0xd7, 0xd7, 
	0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd8, 0xd8, 
	0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd8, 
	0xd8, 0xd8, 0xd7, 0xd7, 0xd8, 0xd8, 0xd8, 0xd9, 
	0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd8, 0xd8, 0xd9, 
	0xd9, 0xda, 0xda, 0xd9, 0xd9, 0xd9, 0xda, 0xda, 
	0xdb, 0xdb, 0xdc, 0xdc, 0xdc, 0xdd, 0xde, 0xdc, 
	0xd4, 0xd8, 0xde, 0xdf, 0xdf, 0xde, 0xde, 0xdd, 
	0xdc, 0xdb, 0xda, 0xd9, 0xd9, 0xd8, 0xd8, 0xd8, 
	0xd7, 0xd7, 0xd7, 0xd8, 0xd8, 0xd9, 0xd9, 0xda, 
	0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 
	0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 0xd9, 
	0xda, 0xda, 0xda, 0xda, 0xd9, 0xd9, 0xd9, 0xda, 
	0xda, 0xdb, 0xdb, 0xdb, 0xda, 0xda, 0xdb, 0xdb, 
	0xdc, 0xdd, 0xdd, 0xde, 0xde, 0xdf, 0xdf, 0xde, 
	0xd5, 0xd9, 0xdd, 0xdf, 0xde, 0xdd, 0xdc, 0xdb, 
	0xda, 0xd9, 0xd8, 0xd8, 0xd7, 0xd7, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd7, 0xd7, 0xd8, 0xd8, 
	0xd8, 0xd9, 0xd9, 0xd9, 0xd9, 0xd8, 0xd8, 0xd8, 
	0xd7, 0xd7, 0xd8, 0xd8, 0xd8, 0xd7, 0xd7, 0xd7, 
	0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd6, 0xd7, 0xd7, 
	0xd7, 0xd8, 0xd8, 0xd8, 0xd8, 0xd9, 0xd9, 0xda, 
	0xda, 0xdb, 0xdc, 0xdc, 0xdc, 0xde, 0xdf, 0xde, 
	0xd6, 0xd9, 0xdc, 0xde, 0xdd, 0xdb, 0xda, 0xd9, 
	0xd8, 0xd7, 0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd7, 
	0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd6, 
	0xd6, 0xd6, 0xd7, 0xd7, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd7, 0xd7, 0xd8, 
	0xd8, 0xd9, 0xda, 0xdb, 0xdb, 0xdd, 0xdf, 0xdd, 
	0xd7, 0xd9, 0xdc, 0xdd, 0xdc, 0xda, 0xd8, 0xd7, 
	0xd6, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd7, 
	0xd8, 0xd8, 0xd9, 0xda, 0xda, 0xdc, 0xde, 0xdd, 
	0xd7, 0xd9, 0xdc, 0xdc, 0xda, 0xd8, 0xd7, 0xd5, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd6, 
	0xd7, 0xd8, 0xd8, 0xd9, 0xd9, 0xdb, 0xde, 0xdc, 
	0xd7, 0xd9, 0xdb, 0xdb, 0xd9, 0xd7, 0xd6, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 
	0xd6, 0xd7, 0xd8, 0xd8, 0xd9, 0xdb, 0xdd, 0xdc, 
	0xd7, 0xd9, 0xda, 0xda, 0xd8, 0xd6, 0xd5, 0xd4, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd3, 0xd3, 0xd3, 0xd4, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd6, 0xd7, 0xd8, 0xd8, 0xda, 0xdd, 0xdb, 
	0xd6, 0xd8, 0xda, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd3, 0xd4, 
	0xd5, 0xd5, 0xd6, 0xd7, 0xd8, 0xda, 0xdc, 0xdb, 
	0xd6, 0xd8, 0xd9, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd1, 0xd1, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd7, 0xd7, 0xda, 0xdc, 0xdb, 
	0xd6, 0xd8, 0xd9, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 
	0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd6, 0xd8, 0xd9, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 0xd3, 
	0xd4, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd6, 0xd7, 0xd9, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd1, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd5, 0xd7, 0xd9, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd7, 0xd7, 0xda, 0xdc, 0xdb, 
	0xd5, 0xd7, 0xd9, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xda, 0xdd, 0xdb, 
	0xd5, 0xd7, 0xd9, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd8, 0xd9, 0xdb, 0xdd, 0xdc, 
	0xd5, 0xd7, 0xd9, 0xd9, 0xd7, 0xd5, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 
	0xd4, 0xd6, 0xd7, 0xd8, 0xd9, 0xdc, 0xde, 0xdc, 
	0xd5, 0xd7, 0xd9, 0xd9, 0xd7, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 
	0xd5, 0xd6, 0xd7, 0xd9, 0xda, 0xdc, 0xde, 0xdc, 
	0xd5, 0xd7, 0xd9, 0xd9, 0xd7, 0xd6, 0xd5, 0xd5, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 
	0xd5, 0xd7, 0xd8, 0xd9, 0xdb, 0xdd, 0xdf, 0xdd, 
	0xd5, 0xd6, 0xd9, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 
	0xd6, 0xd7, 0xd9, 0xda, 0xdc, 0xde, 0xdf, 0xdd, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 
	0xd6, 0xd8, 0xda, 0xdb, 0xdc, 0xde, 0xdf, 0xdd, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd8, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd3, 0xd5, 0xd6, 
	0xd7, 0xd9, 0xdb, 0xdc, 0xdd, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 
	0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd7, 
	0xd8, 0xda, 0xdb, 0xdd, 0xde, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd5, 0xd6, 0xd8, 
	0xd9, 0xdb, 0xdc, 0xde, 0xde, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd8, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd7, 0xd9, 
	0xda, 0xdc, 0xdd, 0xde, 0xde, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd9, 0xd9, 0xd8, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 
	0xd1, 0xd2, 0xd2, 0xd4, 0xd5, 0xd7, 0xd8, 0xda, 
	0xdc, 0xdd, 0xde, 0xde, 0xde, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd8, 0xd9, 0xd8, 0xd6, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 
	0xd1, 0xd2, 0xd3, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 
	0xdd, 0xde, 0xde, 0xde, 0xdd, 0xde, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd8, 0xd9, 0xd8, 0xd6, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 
	0xd2, 0xd3, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xdd, 
	0xde, 0xde, 0xde, 0xdd, 0xdd, 0xde, 0xdf, 0xde, 
	0xd4, 0xd6, 0xd8, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xdd, 0xde, 
	0xde, 0xde, 0xdd, 0xdd, 0xdc, 0xde, 0xdf, 0xde, 
	0xd3, 0xd5, 0xd8, 0xd9, 0xd7, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd4, 
	0xd5, 0xd7, 0xd8, 0xda, 0xdc, 0xdd, 0xdd, 0xde, 
	0xdd, 0xdc, 0xdc, 0xdc, 0xdc, 0xde, 0xdf, 0xde, 
	0xd3, 0xd5, 0xd8, 0xd9, 0xd7, 0xd6, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd5, 
	0xd7, 0xd9, 0xda, 0xdc, 0xdd, 0xdd, 0xdd, 0xdc, 
	0xdc, 0xdb, 0xdb, 0xdb, 0xdb, 0xdd, 0xdf, 0xde, 
	0xd2, 0xd4, 0xd8, 0xd9, 0xd7, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd4, 0xd5, 0xd7, 
	0xd9, 0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 0xdc, 0xdb, 
	0xda, 0xd9, 0xd9, 0xda, 0xdb, 0xdd, 0xdf, 0xdd, 
	0xd2, 0xd4, 0xd8, 0xd8, 0xd6, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd1, 0xd1, 0xd2, 0xd3, 0xd3, 0xd5, 0xd7, 0xd9, 
	0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 0xdb, 0xda, 0xd9, 
	0xd8, 0xd8, 0xd8, 0xd9, 0xda, 0xdc, 0xdf, 0xdd, 
	0xd2, 0xd4, 0xd7, 0xd8, 0xd6, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd2, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 
	0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd7, 0xd9, 0xdb, 
	0xdc, 0xdd, 0xdd, 0xdc, 0xda, 0xd9, 0xd8, 0xd7, 
	0xd6, 0xd6, 0xd7, 0xd8, 0xd9, 0xdc, 0xde, 0xdc, 
	0xd2, 0xd4, 0xd7, 0xd8, 0xd6, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd2, 
	0xd2, 0xd3, 0xd4, 0xd6, 0xd8, 0xda, 0xdb, 0xdc, 
	0xdd, 0xdd, 0xdc, 0xda, 0xd8, 0xd7, 0xd6, 0xd5, 
	0xd5, 0xd6, 0xd7, 0xd8, 0xd8, 0xdb, 0xde, 0xdc, 
	0xd1, 0xd3, 0xd7, 0xd8, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd2, 0xd3, 
	0xd3, 0xd5, 0xd6, 0xd8, 0xda, 0xdc, 0xdd, 0xdd, 
	0xdc, 0xdb, 0xda, 0xd8, 0xd6, 0xd5, 0xd4, 0xd4, 
	0xd5, 0xd5, 0xd6, 0xd7, 0xd8, 0xda, 0xdd, 0xdc, 
	0xd1, 0xd3, 0xd7, 0xd8, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd4, 
	0xd5, 0xd6, 0xd8, 0xda, 0xdc, 0xdd, 0xdd, 0xdc, 
	0xdb, 0xd9, 0xd8, 0xd6, 0xd5, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd5, 0xd6, 0xd7, 0xd7, 0xda, 0xdd, 0xdc, 
	0xd2, 0xd3, 0xd7, 0xd8, 0xd5, 0xd3, 0xd4, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 
	0xd7, 0xd9, 0xda, 0xdc, 0xdd, 0xdd, 0xdc, 0xda, 
	0xd9, 0xd7, 0xd6, 0xd4, 0xd4, 0xd3, 0xd3, 0xd3, 
	0xd4, 0xd4, 0xd5, 0xd6, 0xd7, 0xda, 0xdd, 0xdb, 
	0xd2, 0xd4, 0xd7, 0xd7, 0xd5, 0xd3, 0xd3, 0xd4, 
	0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd7, 
	0xd9, 0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 0xda, 0xd8, 
	0xd7, 0xd5, 0xd4, 0xd3, 0xd3, 0xd2, 0xd3, 0xd3, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xda, 0xdc, 0xdb, 
	0xd2, 0xd4, 0xd7, 0xd7, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 
	0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd6, 0xd7, 0xd9, 
	0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 0xda, 0xd8, 0xd6, 
	0xd5, 0xd4, 0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd2, 0xd4, 0xd7, 0xd8, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 
	0xd1, 0xd2, 0xd3, 0xd5, 0xd6, 0xd7, 0xd9, 0xdb, 
	0xdc, 0xdd, 0xdd, 0xdb, 0xda, 0xd7, 0xd6, 0xd4, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd3, 0xd5, 0xd7, 0xd8, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd1, 0xd2, 
	0xd2, 0xd4, 0xd5, 0xd7, 0xd8, 0xda, 0xdb, 0xdc, 
	0xdc, 0xdc, 0xdb, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd3, 0xd5, 0xd7, 0xd7, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd1, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd8, 0xda, 0xdc, 0xdc, 0xdc, 
	0xdb, 0xda, 0xd9, 0xd7, 0xd6, 0xd4, 0xd3, 0xd2, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd3, 0xd5, 0xd7, 0xd7, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd1, 0xd2, 0xd3, 0xd3, 0xd4, 
	0xd5, 0xd7, 0xd9, 0xdb, 0xdc, 0xdd, 0xdc, 0xdb, 
	0xd9, 0xd7, 0xd6, 0xd5, 0xd4, 0xd3, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd4, 0xd6, 0xd8, 0xd8, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd1, 0xd1, 0xd1, 0xd2, 0xd3, 0xd4, 0xd4, 0xd6, 
	0xd7, 0xd9, 0xda, 0xdc, 0xdd, 0xdd, 0xdb, 0xd9, 
	0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 0xd2, 0xd1, 0xd1, 
	0xd1, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd1, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd4, 0xd6, 0xd8, 0xd8, 0xd5, 0xd3, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 
	0xd1, 0xd2, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd8, 
	0xd9, 0xdb, 0xdc, 0xdd, 0xdc, 0xdb, 0xd9, 0xd7, 
	0xd6, 0xd4, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd4, 0xd6, 0xd8, 0xd7, 0xd5, 0xd4, 0xd3, 0xd2, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd2, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd8, 0xda, 
	0xdb, 0xdc, 0xdd, 0xdc, 0xdb, 0xd9, 0xd7, 0xd6, 
	0xd4, 0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd4, 0xd6, 0xd8, 0xd7, 0xd5, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd3, 0xd4, 0xd5, 0xd6, 0xd8, 0xda, 0xdc, 
	0xdd, 0xdd, 0xdc, 0xdb, 0xd9, 0xd7, 0xd5, 0xd4, 
	0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd5, 0xd6, 0xd8, 0xd8, 0xd6, 0xd4, 0xd3, 0xd3, 
	0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 0xd2, 0xd3, 
	0xd4, 0xd4, 0xd5, 0xd6, 0xd8, 0xda, 0xdb, 0xdd, 
	0xdd, 0xdc, 0xdb, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 
	0xd2, 0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd5, 0xd7, 0xd8, 0xd8, 0xd6, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd2, 0xd2, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd2, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd4, 
	0xd5, 0xd6, 0xd7, 0xd9, 0xda, 0xdc, 0xdd, 0xdd, 
	0xdc, 0xdb, 0xd9, 0xd7, 0xd5, 0xd4, 0xd3, 0xd2, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd3, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd6, 0xd7, 0xd8, 0xd8, 0xd6, 0xd5, 0xd4, 0xd4, 
	0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd4, 0xd4, 0xd5, 
	0xd6, 0xd8, 0xd9, 0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 
	0xdb, 0xd8, 0xd6, 0xd5, 0xd4, 0xd3, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xd1, 0xd1, 0xd2, 0xd2, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd6, 0xd7, 0xd9, 0xdc, 0xdb, 
	0xd6, 0xd8, 0xd9, 0xd8, 0xd7, 0xd5, 0xd5, 0xd4, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd3, 
	0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd5, 0xd6, 0xd7, 
	0xd8, 0xda, 0xdb, 0xdc, 0xdd, 0xdd, 0xdc, 0xdb, 
	0xd9, 0xd6, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 0xd3, 0xd3, 
	0xd4, 0xd5, 0xd6, 0xd7, 0xd7, 0xda, 0xdc, 0xdb, 
	0xd7, 0xd8, 0xd9, 0xd8, 0xd7, 0xd6, 0xd5, 0xd4, 
	0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd4, 0xd4, 0xd5, 0xd5, 0xd6, 0xd6, 0xd7, 0xd9, 
	0xda, 0xdc, 0xdd, 0xdd, 0xdc, 0xdb, 0xda, 0xd9, 
	0xd7, 0xd5, 0xd4, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd2, 0xd2, 0xd2, 0xd3, 0xd4, 
	0xd5, 0xd5, 0xd6, 0xd7, 0xd8, 0xda, 0xdd, 0xdb, 
	0xd7, 0xd9, 0xd9, 0xd9, 0xd8, 0xd6, 0xd6, 0xd5, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd5, 
	0xd5, 0xd6, 0xd6, 0xd7, 0xd7, 0xd8, 0xd9, 0xdb, 
	0xdc, 0xdd, 0xde, 0xdd, 0xdc, 0xda, 0xd9, 0xd7, 
	0xd6, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd1, 
	0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 0xd1, 
	0xd1, 0xd2, 0xd2, 0xd2, 0xd3, 0xd3, 0xd4, 0xd5, 
	0xd5, 0xd6, 0xd7, 0xd8, 0xd8, 0xda, 0xdd, 0xdc, 
	0xd7, 0xd9, 0xda, 0xda, 0xd8, 0xd7, 0xd6, 0xd6, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd6, 
	0xd6, 0xd7, 0xd8, 0xd8, 0xd9, 0xda, 0xdb, 0xdd, 
	0xdd, 0xde, 0xde, 0xdd, 0xdb, 0xd9, 0xd8, 0xd6, 
	0xd5, 0xd4, 0xd3, 0xd3, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 0xd2, 
	0xd2, 0xd2, 0xd3, 0xd3, 0xd3, 0xd4, 0xd4, 0xd5, 
	0xd6, 0xd7, 0xd7, 0xd8, 0xd9, 0xdb, 0xde, 0xdc, 
	0xd7, 0xd9, 0xdb, 0xdb, 0xda, 0xd8, 0xd8, 0xd7, 
	0xd7, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd7, 0xd7, 
	0xd8, 0xd9, 0xda, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 
	0xde, 0xde, 0xdd, 0xdc, 0xda, 0xd9, 0xd7, 0xd6, 
	0xd5, 0xd4, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd2, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd6, 
	0xd7, 0xd7, 0xd8, 0xd9, 0xda, 0xdc, 0xde, 0xdc, 
	0xd7, 0xd9, 0xdb, 0xdc, 0xdb, 0xd9, 0xd9, 0xd8, 
	0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd8, 0xd8, 0xd9, 
	0xda, 0xdb, 0xdb, 0xdc, 0xdd, 0xdd, 0xde, 0xde, 
	0xdf, 0xde, 0xdd, 0xdb, 0xda, 0xd8, 0xd7, 0xd6, 
	0xd5, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd3, 
	0xd3, 0xd3, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xd4, 0xd4, 0xd5, 0xd5, 0xd6, 0xd6, 0xd7, 
	0xd7, 0xd8, 0xd9, 0xda, 0xda, 0xdc, 0xdf, 0xdd, 
	0xd6, 0xd9, 0xdc, 0xdd, 0xdc, 0xdb, 0xda, 0xd9, 
	0xd9, 0xd9, 0xd9, 0xd9, 0xda, 0xda, 0xdb, 0xdb, 
	0xdc, 0xdc, 0xdc, 0xdd, 0xde, 0xde, 0xdf, 0xdf, 
	0xde, 0xdd, 0xdc, 0xdb, 0xda, 0xd8, 0xd7, 0xd6, 
	0xd6, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xd5, 0xd5, 0xd5, 0xd6, 0xd6, 0xd6, 0xd7, 0xd7, 
	0xd8, 0xd9, 0xda, 0xdb, 0xdb, 0xdd, 0xdf, 0xdd, 
	0xd6, 0xd8, 0xdc, 0xde, 0xdd, 0xdc, 0xdc, 0xdb, 
	0xdb, 0xdb, 0xdc, 0xdc, 0xdc, 0xdc, 0xdd, 0xdd, 
	0xdd, 0xdd, 0xdd, 0xdd, 0xde, 0xdf, 0xdf, 0xdf, 
	0xde, 0xdd, 0xdc, 0xdb, 0xda, 0xd9, 0xd8, 0xd7, 
	0xd7, 0xd7, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd5, 0xd5, 0xd5, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd7, 0xd7, 0xd8, 
	0xd9, 0xda, 0xda, 0xdb, 0xdc, 0xde, 0xdf, 0xde, 
	0xd5, 0xd8, 0xdd, 0xdf, 0xde, 0xde, 0xde, 0xde, 
	0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xdf, 0xdf, 
	0xdf, 0xde, 0xde, 0xde, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xdf, 0xde, 0xdd, 0xdd, 0xdc, 0xdb, 0xdb, 0xda, 
	0xda, 0xd9, 0xd9, 0xd9, 0xd9, 0xd8, 0xd8, 0xd8, 
	0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 
	0xd8, 0xd8, 0xd8, 0xd9, 0xd9, 0xd9, 0xda, 0xda, 
	0xdb, 0xdc, 0xdc, 0xdd, 0xde, 0xdf, 0xdf, 0xde, 
	0xd4, 0xd8, 0xde, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 
	0xdf, 0xdf, 0xdf, 0xdf, 0xde, 0xde, 0xdd, 0xdd, 
	0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdc, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdc, 0xdc, 0xdc, 0xdd, 
	0xde, 0xde, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xde, 
	0xd3, 0xd6, 0xdc, 0xde, 0xde, 0xde, 0xde, 0xde, 
	0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xde, 0xde, 
	0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 
	0xde, 0xde, 0xdd, 0xdd, 0xdd, 0xdc, 0xdc, 0xdb, 
	0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 0xda, 
	0xda, 0xda, 0xda, 0xda, 0xdb, 0xdb, 0xdb, 0xdc, 
	0xdc, 0xdc, 0xdd, 0xdd, 0xde, 0xde, 0xde, 0xdd, 
	
};

Vtx icecube_Cube_mesh_layer_1_vtx_0[14] = {
	{{{-842, -888, 842},0, {-16, 3024},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-842, 1918, 842},0, {1008, 3024},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-842, 1918, -842},0, {1008, 2032},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-842, -888, -842},0, {-16, 2032},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{842, 1918, -842},0, {1008, 1008},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{842, -888, -842},0, {-16, 1008},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{842, 1918, 842},0, {1008, -16},{0x49, 0x49, 0x49, 0xFF}}},
	{{{-842, 1918, 842},0, {2000, -16},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-842, 1918, -842},0, {2000, 1008},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{842, -888, 842},0, {-16, -16},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-842, 1918, 842},0, {1008, -1008},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-842, -888, 842},0, {-16, -1008},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-842, -888, -842},0, {-1008, 1008},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-842, -888, 842},0, {-1008, -16},{0xB7, 0xB7, 0x49, 0xFF}}},
};

Gfx icecube_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(icecube_Cube_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 5, 6, 9, 0),
	gsSP2Triangles(9, 6, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 5, 9, 0, 12, 9, 13, 0),
	gsSPEndDisplayList(),
};

Vtx icecube_Cube_mesh_layer_5_vtx_0[14] = {
	{{{-873, -939, 873},0, {-16, 6064},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, 1969, 873},0, {2032, 6064},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, 1969, -873},0, {2032, 4080},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, -939, -873},0, {-16, 4080},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{873, 1969, -873},0, {2032, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{873, -939, -873},0, {-16, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{873, 1969, 873},0, {2032, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, 1969, 873},0, {4016, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, 1969, -873},0, {4016, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{873, -939, 873},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, 1969, 873},0, {2032, -2000},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, -939, 873},0, {-16, -2000},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, -939, -873},0, {-2000, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-873, -939, 873},0, {-2000, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
};

Gfx icecube_Cube_mesh_layer_5_tri_0[] = {
	gsSPVertex(icecube_Cube_mesh_layer_5_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 5, 6, 9, 0),
	gsSP2Triangles(9, 6, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 5, 9, 0, 12, 9, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_icecube_f3d_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(1, 0, SHADE, TEXEL0, 0, 0, 0, PRIMITIVE, 1, 0, SHADE, TEXEL0, 0, 0, 0, PRIMITIVE),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, icecube_mado_ice_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 140),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, icecube_mado_ice_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 158, 158, 158, 158),
	gsSPSetLights1(icecube_f3d_material_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_icecube_f3d_material_002[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_icecube_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, icecube_SUPER_MARIO_64_FE55B4F9_3_2_all_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(icecube_f3d_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_icecube_f3d_material_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx icecube_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_icecube_f3d_material_002),
	gsSPDisplayList(icecube_Cube_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_icecube_f3d_material_002),
	gsSPEndDisplayList(),
};

Gfx icecube_Cube_mesh_layer_5[] = {
	gsSPDisplayList(mat_icecube_f3d_material_001),
	gsSPDisplayList(icecube_Cube_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_icecube_f3d_material_001),
	gsSPEndDisplayList(),
};

Gfx icecube_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
