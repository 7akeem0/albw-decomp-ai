typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EBA2C;
struct S1_4EBA2C;
struct S1_4EBA2C { void g(); };
struct S0_4EBA2C { char pad54[0x54]; S1_4EBA2C* m54; };
void f_4EBA2C(S0_4EBA2C* p) { p->m54->g(); }
