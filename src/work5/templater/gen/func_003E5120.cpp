typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_3E5120 { char pad5[0x5]; u8 m; };
extern G_3E5120 g_00714858;
u8 f_3E5120() { return g_00714858.m; }
