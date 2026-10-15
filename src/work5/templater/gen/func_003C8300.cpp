typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C8300;
struct S1_3C8300;
struct S1_3C8300 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void t(int); };
struct S0_3C8300 { char pad8[0x8]; S1_3C8300* m8; };
void f_3C8300(S0_3C8300* p, int a1) { p->m8->t(a1); }
