typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_443A38 { void g(f32); };
struct S_443A38 { char padB8[0xB8]; M_443A38 m; };
void f_443A38(S_443A38* p) { p->m.g(1.0f); }
