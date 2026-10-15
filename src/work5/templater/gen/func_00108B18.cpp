typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108B18 { char pad8[0x8]; u8 m; };
extern G_108B18 g_00714858;
void f_108B18() { g_00714858.m = 1; }
