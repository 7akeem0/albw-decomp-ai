typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_10AEF8 { char pad1[0x1]; s8 m; };
extern G_10AEF8 g_00715918;
s8 f_10AEF8() { return g_00715918.m; }
