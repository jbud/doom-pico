#ifndef _sprites_h
#define _sprites_h

//#include <avr/pgmspace.h>
#include <stdint.h>

#define bmp_font_width   24  // in bytes
#define bmp_font_height  6
#define CHAR_MAP         " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ.,-_(){}[]#"
#define CHAR_WIDTH       4
#define CHAR_HEIGHT      6
const static uint8_t bmp_font[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00,
  0x06, 0x26, 0x69, 0xf6, 0xf6, 0x66, 0xe6, 0xef, 0xf6, 0x92, 0x19, 0x89, 0x96, 0xe6, 0xe6, 0xe9, 0x99, 0x99, 0xf0, 0x00, 0x02, 0x41, 0x83, 0xcf,
  0x09, 0x29, 0x99, 0x88, 0x19, 0x99, 0x99, 0x98, 0x88, 0x92, 0x1a, 0x8f, 0xd9, 0x99, 0x98, 0x49, 0x99, 0x99, 0x10, 0x00, 0x04, 0x27, 0xe5, 0x6f,
  0x09, 0x22, 0x2f, 0xee, 0x16, 0x7f, 0xe8, 0x9e, 0xe8, 0xf2, 0x1c, 0x89, 0xb9, 0xe9, 0xe6, 0x49, 0x99, 0x66, 0x60, 0x06, 0x04, 0x27, 0xe7, 0xef,
  0x09, 0x24, 0x91, 0x19, 0x19, 0x19, 0x99, 0x98, 0x89, 0x92, 0x9a, 0x89, 0x99, 0x8b, 0x91, 0x49, 0x6f, 0x96, 0x80, 0x20, 0x04, 0x21, 0x87, 0xef,
  0x06, 0x7f, 0x61, 0xe6, 0x16, 0x69, 0xe6, 0xef, 0x86, 0x92, 0x69, 0xf9, 0x96, 0x87, 0x9e, 0x46, 0x69, 0x96, 0xf4, 0x40, 0xf2, 0x41, 0x80, 0xe0,
};

#define BMP_LOGO_WIDTH  72
#define BMP_LOGO_HEIGHT 47
const static uint8_t bmp_logo_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x08, 0x00, 0x01, 0x04, 0x20, 0x08, 0x01, 0x12,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
  0x40, 0x00, 0x80, 0x00, 0x50, 0x00, 0x28, 0x11, 0x02,
  0x40, 0x00, 0xa0, 0x00, 0x50, 0x00, 0x28, 0x0a, 0x02,
  0x60, 0x01, 0xa0, 0x00, 0x50, 0x00, 0x2c, 0x0a, 0x02,
  0x41, 0xe1, 0xb0, 0xf0, 0x50, 0x78, 0x28, 0x0a, 0x06,
  0x62, 0x20, 0xa1, 0xb8, 0x50, 0xc8, 0x2c, 0x04, 0x02,
  0x4a, 0x31, 0xb0, 0x88, 0xd0, 0x88, 0x28, 0x04, 0x06,
  0x62, 0x21, 0xa1, 0x88, 0x50, 0x88, 0x6c, 0x14, 0x02,
  0x43, 0x31, 0xb0, 0x8a, 0x52, 0x8a, 0x28, 0x80, 0x06,
  0x42, 0x31, 0xa8, 0xc8, 0xd0, 0x88, 0x2c, 0x42, 0x86,
  0x6b, 0x29, 0xa5, 0xa8, 0xd4, 0xea, 0xac, 0x50, 0x42,
  0x63, 0x65, 0xb4, 0xda, 0x52, 0xd9, 0x6c, 0x42, 0x26,
  0x53, 0xb1, 0xb1, 0xd8, 0xd4, 0xda, 0x6d, 0x48, 0x86,
  0x6b, 0x75, 0xb5, 0xda, 0x52, 0xfc, 0x6d, 0x6b, 0x56,
  0x6b, 0xa1, 0xb0, 0xfb, 0xda, 0xd9, 0x6c, 0x69, 0x46,
  0x53, 0xed, 0xbd, 0xfa, 0x76, 0xfa, 0xef, 0x6c, 0xb2,
  0x6f, 0xeb, 0xf4, 0xfd, 0xdd, 0xfd, 0x6c, 0xe7, 0x4e,
  0x77, 0xeb, 0xbf, 0xfe, 0xd6, 0xfb, 0xee, 0xf1, 0xe6,
  0x59, 0xef, 0xbc, 0xf2, 0xd6, 0xfb, 0xef, 0xf4, 0xf6,
  0xf3, 0xb7, 0xff, 0xfb, 0x5c, 0xff, 0xef, 0xd6, 0x7a,
  0x6b, 0xbf, 0xbe, 0x88, 0xd2, 0xdf, 0xef, 0xdc, 0xd6,
  0x4b, 0x7f, 0xff, 0xca, 0x70, 0x9f, 0xef, 0xde, 0xce,
  0x4b, 0xdf, 0xbf, 0xeb, 0x76, 0xff, 0xef, 0xdf, 0xd6,
  0x77, 0xff, 0xff, 0xfe, 0x56, 0xff, 0xff, 0xdf, 0xc2,
  0xdf, 0xff, 0xff, 0xfe, 0xfb, 0xdf, 0xef, 0xcf, 0x76,
  0x4f, 0xff, 0xbf, 0xfb, 0xdf, 0xff, 0xe7, 0xef, 0x52,
  0x7f, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0x7e,
  0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xbf, 0xce, 0x62,
  0x7f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x7f, 0xfe, 0xfe,
  0x7f, 0xff, 0xe3, 0xff, 0x8f, 0xff, 0x7f, 0xee, 0x7e,
  0x7f, 0xff, 0xc1, 0xff, 0x07, 0xfc, 0x1f, 0xdf, 0x7e,
  0xff, 0xff, 0x80, 0x7c, 0x01, 0xf0, 0x0f, 0xfd, 0xfe,
  0x7f, 0xff, 0x00, 0x38, 0x01, 0xe0, 0x07, 0xfd, 0x7e,
  0x7f, 0xfc, 0x00, 0x10, 0x00, 0x40, 0x03, 0x3f, 0xfe,
  0x7f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0xfe,
  0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7e,
  0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe,
  0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe,
  0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe,
  0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,
};

#define BMP_GUN_WIDTH   32
#define BMP_GUN_HEIGHT  32
const static uint8_t bmp_gun_bits[] = {
  0x00, 0x00, 0x20, 0x00,
  0x00, 0x00, 0xd8, 0x00,
  0x00, 0x01, 0xc4, 0x00,
  0x00, 0x02, 0x04, 0x00,
  0x00, 0x02, 0x02, 0x00,
  0x00, 0x02, 0xea, 0x00,
  0x00, 0x04, 0xd1, 0x00,
  0x00, 0x09, 0x88, 0x80,
  0x00, 0x19, 0x00, 0x00,
  0x00, 0x0d, 0xc2, 0x80,
  0x00, 0x29, 0x81, 0xc0,
  0x00, 0x0b, 0xa2, 0x20,
  0x00, 0x31, 0x40, 0x40,
  0x00, 0x23, 0x00, 0xc0,
  0x00, 0x13, 0x00, 0x40,
  0x00, 0x72, 0x02, 0x00,
  0x00, 0x49, 0x00, 0x40,
  0x01, 0xe0, 0xa8, 0x20,
  0x07, 0xf1, 0x00, 0x30,
  0x0b, 0xb9, 0xe0, 0xe8,
  0x07, 0x5c, 0x03, 0xfc,
  0x07, 0xef, 0xff, 0xee,
  0x07, 0x75, 0x7f, 0xd2,
  0x1b, 0xbb, 0xff, 0xb2,
  0x11, 0x57, 0x7d, 0x64,
  0x32, 0xaf, 0xff, 0xe8,
  0x13, 0x5f, 0x75, 0xd0,
  0x33, 0xff, 0xfb, 0x98,
  0x17, 0xd7, 0xe5, 0x00,
  0x1b, 0x8f, 0xb2, 0x30,
  0x03, 0x7d, 0x58, 0x10,
  0x6f, 0xbf, 0xec, 0x20,
};
const static uint8_t bmp_gun_mask[] = {
  0x00, 0x00, 0x70, 0x00,
  0x00, 0x01, 0xfc, 0x00,
  0x00, 0x03, 0xfe, 0x00,
  0x00, 0x07, 0xfe, 0x00,
  0x00, 0x07, 0xff, 0x00,
  0x00, 0x07, 0xff, 0x00,
  0x00, 0x0f, 0xff, 0x80,
  0x00, 0x1f, 0xff, 0xc0,
  0x00, 0x3f, 0xff, 0x80,
  0x00, 0x3f, 0xff, 0xc0,
  0x00, 0x7f, 0xff, 0xe0,
  0x00, 0x7f, 0xff, 0xf0,
  0x00, 0x7f, 0xff, 0xe0,
  0x00, 0x7f, 0xff, 0xe0,
  0x00, 0x7f, 0xff, 0xe0,
  0x00, 0xff, 0xff, 0xc0,
  0x00, 0xff, 0xff, 0xe0,
  0x03, 0xff, 0xff, 0xf0,
  0x0f, 0xff, 0xff, 0xf8,
  0x1f, 0xff, 0xff, 0xfc,
  0x1f, 0xff, 0xff, 0xfe,
  0x1f, 0xff, 0xff, 0xff,
  0x1f, 0xff, 0xff, 0xff,
  0x3f, 0xff, 0xff, 0xff,
  0x3f, 0xff, 0xff, 0xfe,
  0x7f, 0xff, 0xff, 0xfc,
  0x7f, 0xff, 0xff, 0xf8,
  0x7f, 0xff, 0xff, 0xfc,
  0x7f, 0xff, 0xff, 0xf8,
  0x7f, 0xff, 0xff, 0xf8,
  0x7f, 0xff, 0xff, 0xf8,
  0xff, 0xff, 0xff, 0xf0,
};

#define BMP_FIRE_WIDTH  24
#define BMP_FIRE_HEIGHT 20
const static uint8_t bmp_fire_bits[] = {
  0x00, 0x00, 0x00,
  0x00, 0x18, 0x00,
  0x00, 0x0c, 0x00,
  0x02, 0x77, 0x00,
  0x01, 0x67, 0x00,
  0x01, 0xe5, 0x80,
  0x01, 0xe3, 0xc0,
  0x02, 0xa2, 0xc0,
  0x07, 0x82, 0xe0,
  0x1f, 0x41, 0xf9,
  0x9d, 0x80, 0x7c,
  0x3e, 0x00, 0x5e,
  0x76, 0x00, 0x6a,
  0x38, 0x00, 0x36,
  0x2f, 0x80, 0x5c,
  0x36, 0x00, 0x7e,
  0x3f, 0x00, 0x58,
  0x10, 0x00, 0x3c,
  0x88, 0x00, 0x00,
  0x00, 0x00, 0x00,
};

#define BMP_IMP_WIDTH   32
#define BMP_IMP_HEIGHT  32
#define BMP_IMP_COUNT   5
const static uint8_t bmp_imp_bits[] = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x80, 0x00,
  0x00, 0x02, 0x80, 0x00,
  0x00, 0x07, 0x40, 0x00,
  0x00, 0x02, 0x80, 0x00,
  0x00, 0x01, 0x00, 0x00,
  0x01, 0x0f, 0xb3, 0x00,
  0x00, 0xd0, 0x4e, 0x00,
  0x00, 0x79, 0x8c, 0x00,
  0x00, 0x1c, 0x19, 0x00,
  0x01, 0x8a, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x00,
  0x02, 0x00, 0x00, 0x00,
  0x03, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x40,
  0x02, 0x08, 0x00, 0x80,
  0x00, 0x00, 0x01, 0x00,
  0x01, 0x8e, 0x30, 0x00,
  0x00, 0x04, 0x10, 0x00,
  0x00, 0x0c, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x00,
  0x00, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x20, 0x00,
  0x00, 0x01, 0x00, 0x00,
  0x00, 0x02, 0x20, 0x00,
  0x00, 0x05, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x80, 0x00,
  0x00, 0x02, 0x40, 0x00,
  0x00, 0x03, 0xe0, 0x00,
  0x00, 0x04, 0x00, 0x00,
  0x00, 0x01, 0xa1, 0x80,
  0x01, 0x80, 0x13, 0x00,
  0x00, 0xf3, 0x8a, 0x00,
  0x00, 0x09, 0x94, 0x00,
  0x00, 0x88, 0x38, 0x80,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x02, 0x23, 0x00,
  0x00, 0x00, 0x00, 0x40,
  0x01, 0x80, 0x00, 0x80,
  0x00, 0x00, 0x01, 0x00,
  0x00, 0xe2, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x0c, 0x20, 0x00,
  0x00, 0x04, 0x30, 0x00,
  0x00, 0x02, 0x20, 0x00,
  0x00, 0x00, 0x40, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00,
  0x00, 0x02, 0x20, 0x00,
  0x00, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xa0, 0x00,
  0x00, 0x00, 0x48, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x0a, 0x00,
  0x00, 0x00, 0x1f, 0x00,
  0x00, 0x02, 0x2a, 0x80,
  0x00, 0x01, 0x05, 0x00,
  0x00, 0x01, 0xae, 0x20,
  0x00, 0x01, 0x24, 0x40,
  0x00, 0x02, 0xac, 0x80,
  0x00, 0x02, 0x86, 0x00,
  0x00, 0x03, 0x20, 0x20,
  0x00, 0x04, 0x30, 0x40,
  0x00, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x40,
  0x00, 0x00, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x20,
  0x00, 0x01, 0x00, 0x00,
  0x00, 0x02, 0x1a, 0x00,
  0x00, 0x00, 0x1c, 0x00,
  0x00, 0x00, 0x38, 0x00,
  0x00, 0x04, 0x00, 0x00,
  0x00, 0x02, 0x98, 0x00,
  0x00, 0x00, 0x18, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x36, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x0a, 0x00,
  0x00, 0x00, 0x08, 0x40,
  0x00, 0x00, 0x00, 0x80,
  0x00, 0x01, 0xd6, 0x80,
  0x00, 0x02, 0xbf, 0x80,
  0x00, 0x06, 0x61, 0xa0,
  0x00, 0x0c, 0xe8, 0x80,
  0x00, 0x0c, 0x10, 0x00,
  0x00, 0x1a, 0x22, 0x00,
  0x00, 0x12, 0x40, 0x00,
  0x00, 0x06, 0x0c, 0x00,
  0x00, 0x04, 0x0d, 0x00,
  0x00, 0x3a, 0x03, 0x00,
  0x00, 0x10, 0x02, 0x00,
  0x00, 0x60, 0x0a, 0x00,
  0x00, 0x50, 0x04, 0x00,
  0x00, 0x20, 0x03, 0x00,
  0x00, 0x00, 0x04, 0x00,
  0x00, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x02, 0x24, 0x00,
  0x00, 0x01, 0x08, 0x00,
  0x00, 0x01, 0x18, 0x00,
  0x00, 0x01, 0x41, 0x40,
  0x02, 0x33, 0xb6, 0x80,
  0x01, 0x9c, 0x04, 0x00,
  0x08, 0xfa, 0x02, 0x08,
  0x05, 0x00, 0x01, 0x0c,
  0x27, 0x83, 0xa2, 0x2a,
  0x00, 0x04, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
};
const static uint8_t bmp_imp_mask[] = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00,
  0x00, 0x03, 0xc0, 0x00,
  0x00, 0x07, 0xe0, 0x00,
  0x00, 0x07, 0xe0, 0x00,
  0x00, 0x03, 0xe0, 0x00,
  0x01, 0x07, 0xf1, 0x80,
  0x00, 0xdf, 0xfe, 0x00,
  0x00, 0x3f, 0xfe, 0x00,
  0x00, 0x7f, 0xff, 0x00,
  0x01, 0xff, 0xff, 0x80,
  0x00, 0xff, 0xff, 0x80,
  0x01, 0xff, 0xff, 0x80,
  0x03, 0xcf, 0xf1, 0xc0,
  0x01, 0xc7, 0xf1, 0xc0,
  0x01, 0x87, 0xf1, 0xc0,
  0x03, 0x0f, 0xf9, 0x80,
  0x03, 0x0f, 0xfb, 0x80,
  0x01, 0x8f, 0xff, 0x80,
  0x03, 0x9f, 0x79, 0x00,
  0x00, 0x1f, 0x7c, 0x00,
  0x00, 0x0f, 0x78, 0x00,
  0x00, 0x0f, 0x78, 0x00,
  0x00, 0x07, 0x30, 0x00,
  0x00, 0x07, 0x38, 0x00,
  0x00, 0x07, 0x30, 0x00,
  0x00, 0x07, 0x30, 0x00,
  0x00, 0x03, 0x78, 0x00,
  0x00, 0x07, 0x30, 0x00,
  0x00, 0x0f, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00,
  0x00, 0x07, 0xc0, 0x00,
  0x00, 0x07, 0xe0, 0x00,
  0x00, 0x07, 0xc0, 0x00,
  0x01, 0x07, 0xe1, 0x00,
  0x00, 0x8f, 0xfa, 0x00,
  0x00, 0xff, 0xfe, 0x00,
  0x00, 0x3f, 0xfe, 0x00,
  0x01, 0x7f, 0xff, 0x80,
  0x00, 0xff, 0xff, 0x00,
  0x01, 0xff, 0xff, 0x80,
  0x03, 0xcf, 0xfb, 0xc0,
  0x03, 0x87, 0xf1, 0xc0,
  0x03, 0xcf, 0xf3, 0xc0,
  0x01, 0xcf, 0xf1, 0x80,
  0x00, 0xcf, 0xf1, 0x00,
  0x00, 0x0f, 0xfb, 0x80,
  0x00, 0x1e, 0x78, 0x00,
  0x00, 0x0e, 0x78, 0x00,
  0x00, 0x1e, 0x78, 0x00,
  0x00, 0x0f, 0x70, 0x00,
  0x00, 0x0f, 0x78, 0x00,
  0x00, 0x07, 0x70, 0x00,
  0x00, 0x07, 0x70, 0x00,
  0x00, 0x07, 0x38, 0x00,
  0x00, 0x03, 0x30, 0x00,
  0x00, 0x03, 0x20, 0x00,
  0x00, 0x07, 0x30, 0x00,
  0x00, 0x05, 0x70, 0x00,
  0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00,
  0x00, 0x00, 0x1f, 0x00,
  0x00, 0x00, 0x1f, 0x00,
  0x00, 0x03, 0x3f, 0x80,
  0x00, 0x01, 0x3f, 0x00,
  0x00, 0x01, 0xff, 0x30,
  0x00, 0x03, 0xff, 0xc0,
  0x00, 0x03, 0xff, 0xc0,
  0x00, 0x03, 0xff, 0x80,
  0x00, 0x07, 0xff, 0xe0,
  0x00, 0x07, 0xff, 0xc0,
  0x00, 0x05, 0xff, 0xe0,
  0x00, 0x00, 0xfc, 0xe0,
  0x00, 0x01, 0xfc, 0xe0,
  0x00, 0x01, 0xfc, 0x70,
  0x00, 0x03, 0xfc, 0x38,
  0x00, 0x03, 0xfe, 0x70,
  0x00, 0x07, 0xfc, 0x00,
  0x00, 0x07, 0x9e, 0x00,
  0x00, 0x0f, 0xbc, 0x00,
  0x00, 0x0f, 0x3e, 0x00,
  0x00, 0x07, 0x9c, 0x00,
  0x00, 0x03, 0x9c, 0x00,
  0x00, 0x03, 0xb8, 0x00,
  0x00, 0x03, 0x98, 0x00,
  0x00, 0x01, 0x98, 0x00,
  0x00, 0x02, 0x1c, 0x00,
  0x00, 0x00, 0x36, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x20, 0x00,
  0x00, 0x00, 0x38, 0x00,
  0x00, 0x00, 0x1f, 0x00,
  0x00, 0x00, 0x1f, 0x40,
  0x00, 0x00, 0x3e, 0x80,
  0x00, 0x01, 0xff, 0x80,
  0x00, 0x03, 0xff, 0x80,
  0x00, 0x07, 0xff, 0xe0,
  0x00, 0x0e, 0xff, 0xc0,
  0x00, 0x0c, 0xff, 0x80,
  0x00, 0x1f, 0xfe, 0x00,
  0x00, 0x13, 0xfc, 0x00,
  0x00, 0x07, 0xfe, 0x00,
  0x00, 0x1f, 0xff, 0x00,
  0x00, 0x3f, 0x9f, 0x00,
  0x00, 0x3e, 0x0f, 0x00,
  0x00, 0x7c, 0x0f, 0x00,
  0x00, 0x78, 0x0f, 0x00,
  0x00, 0x78, 0x07, 0x80,
  0x00, 0x78, 0x07, 0x40,
  0x00, 0x38, 0x07, 0x80,
  0x00, 0x30, 0x07, 0x00,
  0x00, 0x30, 0x01, 0x00,
  0x01, 0xf0, 0x00, 0x00,
  0x01, 0xb0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x1c, 0x00,
  0x00, 0x01, 0x3e, 0x00,
  0x00, 0x03, 0xff, 0x00,
  0x00, 0x0f, 0xff, 0xe0,
  0x01, 0x3f, 0xff, 0xc0,
  0x01, 0xff, 0xff, 0xc0,
  0x19, 0xff, 0xff, 0xe8,
  0x7f, 0xff, 0xff, 0xfe,
  0x3f, 0xff, 0xff, 0xfe,
  0x1f, 0xc2, 0x07, 0xe0,
  0x1f, 0x00, 0x01, 0xe0,
  0x0e, 0x00, 0x00, 0x40,
  0x00, 0x00, 0x00, 0x00,
};

#define BMP_FIREBALL_WIDTH 16
#define BMP_FIREBALL_HEIGHT 16
const static uint8_t bmp_fireball_bits[] = {
  0x00, 0x00,
  0x01, 0x40,
  0x0a, 0xb0,
  0x0e, 0xd0,
  0x00, 0x68,
  0x53, 0xb4,
  0x0f, 0x48,
  0x27, 0x78,
  0x17, 0xa8,
  0x27, 0xf0,
  0x21, 0xd6,
  0x02, 0xf8,
  0x20, 0x48,
  0x06, 0x20,
  0x01, 0x00,
  0x00, 0x00,
};
const static uint8_t bmp_fireball_mask[] = {
  0x1f, 0x40,
  0x0f, 0xf0,
  0x3f, 0xf8,
  0x1f, 0xfc,
  0x7f, 0xfd,
  0x7f, 0xfc,
  0x7f, 0xfd,
  0xff, 0xfe,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xfe,
  0xff, 0xfe,
  0x3f, 0xfe,
  0x17, 0xf8,
  0x07, 0xf4,
  0x01, 0xe0,
};

#define BMP_DOOR_WIDTH    32
#define BMP_DOOR_HEIGHT   32
const static uint8_t bmp_door_bits[] = {
  0xff, 0xff, 0xff, 0xff,
  0xb2, 0xbd, 0xcd, 0x5b,
  0x9a, 0xf4, 0x6d, 0x71,
  0xff, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x00,
  0xbf, 0xff, 0xff, 0xfd,
  0x3f, 0x00, 0xfe, 0xfc,
  0x3e, 0x00, 0xc6, 0xfc,
  0xbc, 0xaa, 0xfe, 0xbd,
  0x39, 0x54, 0xc6, 0xbc,
  0x32, 0x8e, 0xfe, 0xac,
  0xb5, 0xfe, 0xc6, 0xad,
  0x3f, 0xe0, 0xfe, 0xac,
  0x31, 0xe0, 0xc6, 0xac,
  0xb3, 0xf4, 0xfe, 0xad,
  0x3f, 0xe8, 0xc6, 0xac,
  0x3c, 0xf4, 0xd6, 0xac,
  0xb8, 0xff, 0xfe, 0xad,
  0x34, 0xc7, 0xfe, 0xfc,
  0x38, 0xd6, 0x0e, 0x0c,
  0xb0, 0xd6, 0x4e, 0x0d,
  0x3f, 0xd6, 0xaf, 0x5c,
  0x30, 0x47, 0xff, 0xac,
  0xb7, 0x57, 0xff, 0xfd,
  0x3f, 0xc6, 0x0e, 0x0c,
  0x35, 0x56, 0x40, 0x4c,
  0xb5, 0x46, 0xaa, 0xad,
  0x35, 0x56, 0x55, 0x4c,
  0xff, 0xff, 0xff, 0xff,
  0xb0, 0x1f, 0xf8, 0x0d,
  0xd9, 0x30, 0x0c, 0x9b,
  0xff, 0xe0, 0x07, 0xff,
};

#define BMP_ITEMS_WIDTH   16
#define BMP_ITEMS_HEIGHT  16
#define BMP_ITEMS_COUNT   2
const static uint8_t bmp_items_bits[] = {
  0x1f, 0xf8,
  0x3f, 0xfc,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x77, 0xee,
  0x3f, 0xfc,
  0x5f, 0xfa,
  0x2f, 0xf6,
  0x53, 0xcc,
  0x3e, 0x7e,
  0x5e, 0x7c,
  0x38, 0x1e,
  0x58, 0x1c,
  0x3e, 0x7e,
  0x5e, 0x7e,
  0x2e, 0xfc,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x0f, 0xfc,
  0x17, 0xfc,
  0x22, 0x6c,
  0x36, 0x44,
  0x3f, 0xfc,
  0x1f, 0xfc,
  0x2b, 0xfc,
  0x05, 0x54,
  0x02, 0xa8,
  0x00, 0x00,
  0x00, 0x00,
};
const static uint8_t bmp_items_mask[] = {
  0x1f, 0xf8,
  0x3f, 0xfc,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x7f, 0xfe,
  0x3f, 0xfc,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x0f, 0xfc,
  0x1f, 0xfc,
  0x3f, 0xfc,
  0x3f, 0xfc,
  0x3f, 0xfc,
  0x3f, 0xfc,
  0x3f, 0xfc,
  0x07, 0xfc,
  0x03, 0xf8,
  0x00, 0x00,
  0x00, 0x00,
};

// Gradient for lighting.
// Note: Width and height are in bytes
#define GRADIENT_WIDTH  2
#define GRADIENT_HEIGHT 8
#define GRADIENT_COUNT  8
#define GRADIENT_WHITE  7
#define GRADIENT_BLACK  0
const static uint8_t gradient[] = {
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x00, 0x00,
  0x88, 0x88,
  0x00, 0x00,
  0x22, 0x22,
  0x00, 0x00,
  0x8a, 0x8a,
  0x00, 0x00,
  0x22, 0x22,
  0x00, 0x00,
  0xaa, 0xaa,
  0x10, 0x10,
  0xaa, 0xaa,
  0x00, 0x00,
  0xaa, 0xaa,
  0x01, 0x01,
  0xaa, 0xaa,
  0x44, 0x44,
  0xaa, 0xaa,
  0x55, 0x55,
  0xaa, 0xaa,
  0x44, 0x44,
  0xaa, 0xaa,
  0x15, 0x55,
  0xaa, 0xaa,
  0x55, 0x55,
  0xaa, 0xaa,
  0x55, 0x55,
  0xbb, 0xbb,
  0x55, 0x55,
  0xaa, 0xea,
  0x55, 0x55,
  0xbb, 0xbb,
  0x55, 0x55,
  0xff, 0xff,
  0x55, 0x55,
  0xfb, 0xfb,
  0x55, 0x55,
  0xff, 0xff,
  0x55, 0x55,
  0xbb, 0xbf,
  0x57, 0x57,
  0xff, 0xff,
  0xdd, 0xdd,
  0xff, 0xff,
  0x77, 0x75,
  0xff, 0xff,
  0xdd, 0xdd,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
  0xff, 0xff,
};

#endif

