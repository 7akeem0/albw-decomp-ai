typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_532B98;
struct M_532B98;
struct M_532B98 { void g(); };
struct S0_532B98 { char pad60[0x60]; M_532B98 m60; };
void f_532B98(S0_532B98* p) { p->m60.g(); }
