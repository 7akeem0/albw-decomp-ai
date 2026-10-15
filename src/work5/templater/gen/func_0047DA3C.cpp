typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_47DA3C { void h(); };
struct S_47DA3C { char pad74[0x74]; M_47DA3C m; void g(); };
void f_47DA3C(S_47DA3C* p) { p->g(); p->m.h(); }
