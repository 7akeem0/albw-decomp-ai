typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_47431C { void h(); };
struct S_47431C { char pad74[0x74]; M_47431C m; void g(); };
void f_47431C(S_47431C* p) { p->g(); p->m.h(); }
