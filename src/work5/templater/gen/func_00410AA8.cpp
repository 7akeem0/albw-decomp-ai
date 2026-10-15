typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_410AA8;
struct S1_410AA8;
struct S1_410AA8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void t(); };
struct S0_410AA8 { char pad14[0x14]; S1_410AA8* m14; };
void f_410AA8(S0_410AA8* p) { p->m14->t(); }
