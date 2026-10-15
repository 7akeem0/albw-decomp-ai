typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102C00 { char pad8[0x8]; u32 m; };
extern G_102C00 g_00715858;
void f_102C00(u32 a) { g_00715858.m = a; }
