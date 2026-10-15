typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4ED46C;
struct S1_4ED46C;
struct S1_4ED46C { void g(); };
struct S0_4ED46C { char pad18[0x18]; S1_4ED46C* m18; };
void f_4ED46C(S0_4ED46C* p) { p->m18->g(); }
