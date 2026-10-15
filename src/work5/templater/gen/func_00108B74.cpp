typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108B74 { char pad7[0x7]; s8 m; };
extern G_108B74 g_00714858;
s8 f_108B74() { return g_00714858.m; }
