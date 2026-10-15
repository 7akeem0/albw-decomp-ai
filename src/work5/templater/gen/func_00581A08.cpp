typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_581A08 { char pad8[0x8]; u32 m; };
extern G_581A08 g_00709D28;
u32 f_581A08() { return g_00709D28.m; }
