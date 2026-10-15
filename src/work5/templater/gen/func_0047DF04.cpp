typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_47DF04 { void h(); };
struct S_47DF04 { char pad98[0x98]; M_47DF04 m; void g(); };
void f_47DF04(S_47DF04* p) { p->g(); p->m.h(); }
