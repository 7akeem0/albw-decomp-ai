typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102B94 { char pad14[0x14]; u32 m; };
extern G_102B94 g_00714858;
void f_102B94(u32 a) { g_00714858.m = a; }
