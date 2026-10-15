typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_3DE110 { char pad4[0x4]; s8 m; };
extern G_3DE110 g_00714A40;
s8 f_3DE110() { return g_00714A40.m; }
