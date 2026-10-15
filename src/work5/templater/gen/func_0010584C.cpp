typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10584C { char pad5[0x5]; u8 m; };
extern G_10584C g_00714858;
void f_10584C(u8 a) { g_00714858.m = a; }
