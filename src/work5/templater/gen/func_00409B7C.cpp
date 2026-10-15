typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_409B7C;
struct S1_409B7C;
struct S1_409B7C { void g(); };
struct S0_409B7C { char pad29E0[0x29E0]; S1_409B7C* m29E0; };
void f_409B7C(S0_409B7C* p) { p->m29E0->g(); }
