typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_3DC398 { char pad32C[0x32C]; u32 m; };
extern G_3DC398 g_007A16F0;
u32 f_3DC398() { return g_007A16F0.m; }
