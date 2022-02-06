#include "water.h"

// Water assets
#include "water1.h" //water1_tex
#include "water2.h" //water2_tex

// Water state
static u8 water1_x = 0, water1_y = 0;
static u8 water2_x = 0, water2_y = 0;
static u8 water_tex[64 * 64];
static u8 water_texI4[64 * 32];

// Texture multiply lookup table
static const u8 int_map[16][16] = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x11 },
    { 0x00, 0x02, 0x04, 0x06, 0x09, 0x0B, 0x0D, 0x0F, 0x12, 0x14, 0x16, 0x18, 0x1B, 0x1D, 0x1F, 0x22 },
    { 0x00, 0x03, 0x06, 0x0A, 0x0D, 0x11, 0x14, 0x17, 0x1B, 0x1E, 0x22, 0x25, 0x28, 0x2C, 0x2F, 0x33 },
    { 0x00, 0x04, 0x09, 0x0D, 0x12, 0x16, 0x1B, 0x1F, 0x24, 0x28, 0x2D, 0x31, 0x36, 0x3A, 0x3F, 0x44 },
    { 0x00, 0x05, 0x0B, 0x11, 0x16, 0x1C, 0x22, 0x27, 0x2D, 0x33, 0x38, 0x3E, 0x44, 0x49, 0x4F, 0x55 },
    { 0x00, 0x06, 0x0D, 0x14, 0x1B, 0x22, 0x28, 0x2F, 0x36, 0x3D, 0x44, 0x4A, 0x51, 0x58, 0x5F, 0x66 },
    { 0x00, 0x07, 0x0F, 0x17, 0x1F, 0x27, 0x2F, 0x37, 0x3F, 0x47, 0x4F, 0x57, 0x5F, 0x67, 0x6F, 0x77 },
    { 0x00, 0x09, 0x12, 0x1B, 0x24, 0x2D, 0x36, 0x3F, 0x48, 0x51, 0x5A, 0x63, 0x6C, 0x75, 0x7E, 0x88 },
    { 0x00, 0x0A, 0x14, 0x1E, 0x28, 0x33, 0x3D, 0x47, 0x51, 0x5B, 0x66, 0x70, 0x7A, 0x84, 0x8E, 0x99 },
    { 0x00, 0x0B, 0x16, 0x22, 0x2D, 0x38, 0x44, 0x4F, 0x5A, 0x66, 0x71, 0x7C, 0x88, 0x93, 0x9E, 0xAA },
    { 0x00, 0x0C, 0x18, 0x25, 0x31, 0x3E, 0x4A, 0x57, 0x63, 0x70, 0x7C, 0x89, 0x95, 0xA2, 0xAE, 0xBB },
    { 0x00, 0x0D, 0x1B, 0x28, 0x36, 0x44, 0x51, 0x5F, 0x6C, 0x7A, 0x88, 0x95, 0xA3, 0xB0, 0xBE, 0xCC },
    { 0x00, 0x0E, 0x1D, 0x2C, 0x3A, 0x49, 0x58, 0x67, 0x75, 0x84, 0x93, 0xA2, 0xB0, 0xBF, 0xCE, 0xDD },
    { 0x00, 0x0F, 0x1F, 0x2F, 0x3F, 0x4F, 0x5F, 0x6F, 0x7E, 0x8E, 0x9E, 0xAE, 0xBE, 0xCE, 0xDE, 0xEE },
    { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF },
};
extern u64 lastRenderedFrame;
extern u32 gGlobalTimer;
// Water interface
void water_scroll() {
    water1_x++;
    // water1_y is stationary
    water2_x--;
    water2_y++;
}
void water_render() {
    int x, y;

    const u8 *y1, *y2;
    u8 s1, s2;
    u8 p1, p2;
    u8 *top = water_tex;
    u8 fp;

    if (lastRenderedFrame != gGlobalTimer){
        return;
    }
    for (y = 0; y < 256; y += 4) {
        // Get texture pointers
        y1 = water1_tex + ((u8)(water1_y + y) << 7);
        s1 = (water1_x & 1) ? 0 : 4;

        y2 = water2_tex + ((u8)(water2_y + y) << 7);
        s2 = (water2_x & 1) ? 0 : 4;

        for (x = 0; x < 256; x += 4) {
            // Read pixels
            p1 = (y1[(u8)(water1_x + x) >> 1] >> s1) & 0xF;
            p2 = (y2[(u8)(water2_x + x) >> 1] >> s2) & 0xF;

            // Write pixel
            fp = int_map[p1][p2];
            *top++ = fp;
        }
    }
}

const u8 *water_get_src() {
    return water_tex;
}



void water_renderI4() {
    int x, y;

    const u8 *y1, *y2;
    u8 s1, s2;
    u8 p1, p2;
    u8 *top = water_texI4;
    u8 fp1;
    u8 fp2;

    if (lastRenderedFrame != gGlobalTimer){
        return;
    }

    for (y = 0; y < 256; y += 4) {
        // Get texture pointers
        y1 = water1_tex + ((u8)(water1_y + y) << 7);
        s1 = (water1_x & 1) ? 0 : 4;

        y2 = water2_tex + ((u8)(water2_y + y) << 7);
        s2 = (water2_x & 1) ? 0 : 4;

        for (x = 0; x < 256; x += 8) {
            p1 = (y1[(u8)(water1_x + x) >> 1] >> s1) & 0xF;
            p2 = (y2[(u8)(water2_x + x) >> 1] >> s2) & 0xF;
            fp1 = int_map[p1][p2]/16;
            p1 = (y1[(u8)(water1_x + x + 4) >> 1] >> s1) & 0xF;
            p2 = (y2[(u8)(water2_x + x + 4) >> 1] >> s2) & 0xF;
            fp2 = int_map[p1][p2]/16;

            *top++ = (fp1*16 + fp2);
        }
    }
}


const u8 *water_get_srcI4() {
    return water_texI4;
}