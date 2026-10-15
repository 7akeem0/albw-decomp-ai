typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F878;
struct S1_56F878;
struct S1_56F878 { char pad2[0x2]; u8 m2; };
struct S0_56F878 { char padC[0xC]; S1_56F878* mC; };
u8 f_56F878(S0_56F878* p) { return p->mC->m2; }
