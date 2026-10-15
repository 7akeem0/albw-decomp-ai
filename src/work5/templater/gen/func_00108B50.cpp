typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108B50 { char padB[0xB]; u8 m; };
extern G_108B50 g_00714858;
u8 f_108B50() { return g_00714858.m; }
