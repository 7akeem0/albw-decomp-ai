typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40D80C;
struct S0_40D80C { char pad94[0x94]; u8 m94; };
void f_40D80C(S0_40D80C* p) { p->m94 = 0x1; }
