typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_4A4378 { void g(f32); };
struct S_4A4378 { char pad44[0x44]; M_4A4378 m; };
void f_4A4378(S_4A4378* p) { p->m.g(1.0f); }
