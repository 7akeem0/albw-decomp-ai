typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F884;
struct S1_56F884;
struct S1_56F884 { char pad3[0x3]; u8 m3; };
struct S0_56F884 { char padC[0xC]; S1_56F884* mC; };
u8 f_56F884(S0_56F884* p) { return p->mC->m3; }
