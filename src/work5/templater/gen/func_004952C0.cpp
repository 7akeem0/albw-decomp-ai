typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4952C0;
struct S1_4952C0;
struct S1_4952C0 { virtual void v0(); virtual void v1(); virtual void t(int); };
struct S0_4952C0 { char pad20[0x20]; S1_4952C0* m20; };
void f_4952C0(S0_4952C0* p, int a1) { p->m20->t(a1); }
