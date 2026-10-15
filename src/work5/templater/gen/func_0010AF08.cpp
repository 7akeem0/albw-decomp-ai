typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10AF08 { char pad1C[0x1C]; u32 m; };
extern G_10AF08 g_00715918;
u32 f_10AF08() { return g_00715918.m; }
