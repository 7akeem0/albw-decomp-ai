typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102C30 { char pad1[0x1]; u8 m; };
extern G_102C30 g_00715858;
void f_102C30(u8 a) { g_00715858.m = a; }
