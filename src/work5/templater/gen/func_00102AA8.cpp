typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102AA8 { char pad2[0x2]; s8 m; };
extern G_102AA8 g_00714838;
s8 f_102AA8() { return g_00714838.m; }
