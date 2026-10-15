typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_495090;
struct S1_495090;
struct S1_495090 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void t(); };
struct S0_495090 { char pad20[0x20]; S1_495090* m20; };
void f_495090(S0_495090* p) { p->m20->t(); }
