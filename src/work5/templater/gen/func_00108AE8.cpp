typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108AE8 { char pad10[0x10]; u32 m; };
extern G_108AE8 g_00714858;
void f_108AE8(u32 a) { g_00714858.m = a; }
