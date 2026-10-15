typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_600614 { char pad10[0x10]; u8 m; };
extern G_600614 g_0079CAB8;
u8 f_600614() { return g_0079CAB8.m; }
