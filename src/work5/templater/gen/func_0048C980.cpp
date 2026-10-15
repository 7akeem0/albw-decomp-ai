typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48C980;
struct S1_48C980;
struct S1_48C980 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void t(); };
struct S0_48C980 { char pad4[0x4]; S1_48C980* m4; };
void f_48C980(S0_48C980* p) { p->m4->t(); }
