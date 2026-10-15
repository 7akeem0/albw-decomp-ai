typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5279FC;
struct S1_5279FC;
struct S1_5279FC { void g(); };
struct S0_5279FC { char pad2D0[0x2D0]; S1_5279FC* m2D0; };
void f_5279FC(S0_5279FC* p) { p->m2D0->g(); }
