typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108FBC { char pad2[0x2]; u8 m; };
extern G_108FBC g_00714858;
u8 f_108FBC() { return g_00714858.m; }
