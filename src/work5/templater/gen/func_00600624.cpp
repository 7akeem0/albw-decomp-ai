typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_600624 { char pad11[0x11]; u8 m; };
extern G_600624 g_0079CAB8;
u8 f_600624() { return g_0079CAB8.m; }
