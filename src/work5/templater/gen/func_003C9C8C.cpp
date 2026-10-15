typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C9C8C;
struct M_3C9C8C;
struct M_3C9C8C { void g(); };
struct S0_3C9C8C { char pad8[0x8]; M_3C9C8C m8; };
void f_3C9C8C(S0_3C9C8C* p) { p->m8.g(); }
