typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C8310;
struct S1_3C8310;
struct S1_3C8310 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void t(int); };
struct S0_3C8310 { char pad4[0x4]; S1_3C8310* m4; };
void f_3C8310(S0_3C8310* p, int a1) { p->m4->t(a1); }
