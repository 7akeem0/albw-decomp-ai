typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_472B60 { void h(); };
struct S_472B60 { char pad74[0x74]; M_472B60 m; void g(); };
void f_472B60(S_472B60* p) { p->g(); p->m.h(); }
