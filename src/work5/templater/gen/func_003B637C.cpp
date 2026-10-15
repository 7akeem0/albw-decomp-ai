typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_3B637C { void g(f32); };
struct S_3B637C { char pad60[0x60]; M_3B637C m; };
void f_3B637C(S_3B637C* p) { p->m.g(1.0f); }
