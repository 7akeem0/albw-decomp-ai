typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_108B98 { char pad14[0x14]; u32 m; };
extern G_108B98 g_00714858;
u32 f_108B98() { return g_00714858.m; }
