typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_414FE8;
struct M_414FE8;
struct M_414FE8 { void g(); };
struct S0_414FE8 { char pad1C4[0x1C4]; M_414FE8 m1C4; };
void f_414FE8(S0_414FE8* p) { p->m1C4.g(); }
