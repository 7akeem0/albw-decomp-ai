typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_19A4C4;
struct S1_19A4C4;
struct S1_19A4C4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void t(int); };
struct S0_19A4C4 { char pad14[0x14]; S1_19A4C4* m14; };
void f_19A4C4(S0_19A4C4* p, int a1) { p->m14->t(a1); }
