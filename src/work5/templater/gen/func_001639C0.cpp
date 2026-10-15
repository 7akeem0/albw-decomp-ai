typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1639C0 { char pad3DC[0x3DC]; f32 m3DC; char pad3E4[0x4]; f32 m3E4; };
void f_1639C0(S_1639C0* p) { p->m3DC = 0.0f; p->m3E4 = 0.0f; }
