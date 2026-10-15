typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2D404C;
struct S1_2D404C;
struct S1_2D404C { void g(); };
struct S0_2D404C { char pad5F8[0x5F8]; S1_2D404C* m5F8; };
void f_2D404C(S0_2D404C* p) { p->m5F8->g(); }
