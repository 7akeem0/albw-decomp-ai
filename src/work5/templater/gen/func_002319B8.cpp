typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2319B8;
struct S1_2319B8;
struct S1_2319B8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void t(); };
struct S0_2319B8 { char pad4[0x4]; S1_2319B8* m4; };
void f_2319B8(S0_2319B8* p) { p->m4->t(); }
