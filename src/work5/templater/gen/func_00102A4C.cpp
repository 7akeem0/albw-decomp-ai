typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102A4C { char pad18[0x18]; u32 m; };
extern G_102A4C g_00714858;
u32 f_102A4C() { return g_00714858.m; }
