typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_36176C;
struct S1_36176C;
struct S1_36176C { void g(); };
struct S0_36176C { char pad10[0x10]; S1_36176C* m10; };
void f_36176C(S0_36176C* p) { p->m10->g(); }
