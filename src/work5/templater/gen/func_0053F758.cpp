typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53F758;
struct S1_53F758;
struct S1_53F758 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void t(int); };
struct S0_53F758 { char pad48[0x48]; S1_53F758* m48; };
void f_53F758(S0_53F758* p, int a1) { p->m48->t(a1); }
