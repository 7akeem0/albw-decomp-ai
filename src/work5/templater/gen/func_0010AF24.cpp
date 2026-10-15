typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10AF24 { char pad10[0x10]; u32 m; };
extern G_10AF24 g_00714858;
u32 f_10AF24() { return g_00714858.m; }
