typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_45E49C { void g(f32); };
struct S_45E49C { char pad110[0x110]; M_45E49C m; };
void f_45E49C(S_45E49C* p) { p->m.g(1.0f); }
