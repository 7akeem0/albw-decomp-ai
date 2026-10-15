typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108B2C { char pad8[0x8]; s8 m; };
extern G_108B2C g_00714858;
s8 f_108B2C() { return g_00714858.m; }
