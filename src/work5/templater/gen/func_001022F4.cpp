typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_1022F4 { char pad4[0x4]; u32 m; };
extern G_1022F4 g_00714A30;
u32 f_1022F4() { return g_00714A30.m; }
