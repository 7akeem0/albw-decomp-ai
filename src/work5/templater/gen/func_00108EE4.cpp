typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108EE4 { char pad3[0x3]; u8 m; };
extern G_108EE4 g_00714858;
u8 f_108EE4() { return g_00714858.m; }
