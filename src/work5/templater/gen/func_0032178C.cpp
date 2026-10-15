typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_32178C;
struct S1_32178C;
struct S1_32178C { void g(); };
struct S0_32178C { char pad54[0x54]; S1_32178C* m54; };
void f_32178C(S0_32178C* p) { p->m54->g(); }
