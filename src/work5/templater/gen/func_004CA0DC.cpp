typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4CA0DC { char pad3DC[0x3DC]; f32 m3DC; f32 m3E0; f32 m3E4; };
void f_4CA0DC(S_4CA0DC* p) { p->m3DC = 0.0f; p->m3E0 = 0.0f; p->m3E4 = 0.0f; }
