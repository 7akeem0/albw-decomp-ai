typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_45F160 { void h(); };
struct S_45F160 { char padE4[0xE4]; M_45F160 m; void g(); };
void f_45F160(S_45F160* p) { p->g(); p->m.h(); }
