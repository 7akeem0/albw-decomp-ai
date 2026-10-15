typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_49FDD4 { void h(); };
struct S_49FDD4 { char pad15C[0x15C]; M_49FDD4 m; void g(); };
void f_49FDD4(S_49FDD4* p) { p->g(); p->m.h(); }
