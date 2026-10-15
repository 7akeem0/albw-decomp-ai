typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56AD98;
struct S1_56AD98;
struct S1_56AD98 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void t(); };
struct S0_56AD98 { char pad14[0x14]; S1_56AD98* m14; };
void f_56AD98(S0_56AD98* p) { p->m14->t(); }
