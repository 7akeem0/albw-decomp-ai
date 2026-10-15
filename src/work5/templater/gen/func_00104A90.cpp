typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_104A90 { char padB[0xB]; u8 m; };
extern G_104A90 g_00714858;
void f_104A90(u8 a) { g_00714858.m = a; }
