typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_417C7C;
struct S0_417C7C { char pad8[0x8]; f32 m8; };
void f_417C7C(S0_417C7C* p, f32 v) { p->m8 = v; }
