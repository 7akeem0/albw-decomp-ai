typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F6F8;
struct S1_56F6F8;
struct S1_56F6F8 { char padB[0xB]; u8 mB; };
struct S0_56F6F8 { char padC[0xC]; S1_56F6F8* mC; };
u8 f_56F6F8(S0_56F6F8* p) { return p->mC->mB; }
