typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_2313C4 { void h(); };
struct S_2313C4 { char pad38[0x38]; M_2313C4 m; void g(); };
void f_2313C4(S_2313C4* p) { p->g(); p->m.h(); }
