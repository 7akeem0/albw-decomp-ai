typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_495080;
struct S1_495080;
struct S1_495080 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void t(); };
struct S0_495080 { char pad20[0x20]; S1_495080* m20; };
void f_495080(S0_495080* p) { p->m20->t(); }
