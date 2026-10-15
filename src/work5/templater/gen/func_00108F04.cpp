typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108F04 { char pad3[0x3]; u8 m; };
extern G_108F04 g_00714858;
void f_108F04(u8 a) { g_00714858.m = a; }
