typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56AD78;
struct S1_56AD78;
struct S1_56AD78 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void t(); };
struct S0_56AD78 { char pad14[0x14]; S1_56AD78* m14; };
void f_56AD78(S0_56AD78* p) { p->m14->t(); }
