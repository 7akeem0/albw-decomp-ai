typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_46F3A4 { void h(); };
struct S_46F3A4 { char pad78[0x78]; M_46F3A4 m; void g(); };
void f_46F3A4(S_46F3A4* p) { p->g(); p->m.h(); }
