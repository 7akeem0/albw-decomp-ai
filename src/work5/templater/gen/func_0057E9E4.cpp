typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57E9E4;
struct S1_57E9E4;
struct S1_57E9E4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void t(int); };
struct S0_57E9E4 { char pad50[0x50]; S1_57E9E4* m50; };
void f_57E9E4(S0_57E9E4* p, int a1) { p->m50->t(a1); }
