typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10AA9C { char pad1[0x1]; s8 m; };
extern G_10AA9C g_007158E8;
s8 f_10AA9C() { return g_007158E8.m; }
