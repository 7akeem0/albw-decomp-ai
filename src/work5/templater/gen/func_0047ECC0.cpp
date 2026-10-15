typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_47ECC0 { void h(); };
struct S_47ECC0 { char pad78[0x78]; M_47ECC0 m; void g(); };
void f_47ECC0(S_47ECC0* p) { p->g(); p->m.h(); }
