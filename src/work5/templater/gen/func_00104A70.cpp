typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_104A70 { char padA[0xA]; u8 m; };
extern G_104A70 g_00714858;
u8 f_104A70() { return g_00714858.m; }
