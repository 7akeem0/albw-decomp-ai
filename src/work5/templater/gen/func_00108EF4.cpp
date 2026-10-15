typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108EF4 { char pad4[0x4]; u8 m; };
extern G_108EF4 g_00714858;
void f_108EF4(u8 a) { g_00714858.m = a; }
