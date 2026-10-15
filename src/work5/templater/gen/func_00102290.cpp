typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102290 { char pad40[0x40]; u32 m; };
extern G_102290 g_1FF80000;
u32 f_102290() { return g_1FF80000.m; }
