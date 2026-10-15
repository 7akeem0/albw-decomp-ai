typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_3B68B0 { void h(); };
struct S_3B68B0 { char pad54[0x54]; M_3B68B0 m; void g(); };
void f_3B68B0(S_3B68B0* p) { p->g(); p->m.h(); }
