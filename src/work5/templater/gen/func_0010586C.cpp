typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10586C { char pad6[0x6]; u8 m; };
extern G_10586C g_00714858;
void f_10586C(u8 a) { g_00714858.m = a; }
