typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102A18 { char pad1[0x1]; u8 m; };
extern G_102A18 g_00715918;
void f_102A18() { g_00715918.m = 1; }
