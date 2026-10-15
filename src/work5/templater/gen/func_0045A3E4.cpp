typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_45A3E4 { void g(f32); };
struct S_45A3E4 { char pad14C[0x14C]; M_45A3E4 m; };
void f_45A3E4(S_45A3E4* p) { p->m.g(1.0f); }
