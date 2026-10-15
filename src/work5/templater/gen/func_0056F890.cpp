typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F890;
struct S1_56F890;
struct S1_56F890 { char pad1[0x1]; u8 m1; };
struct S0_56F890 { char padC[0xC]; S1_56F890* mC; };
u8 f_56F890(S0_56F890* p) { return p->mC->m1; }
