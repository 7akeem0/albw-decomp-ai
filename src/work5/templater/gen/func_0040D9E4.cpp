typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40D9E4;
struct S1_40D9E4;
struct S1_40D9E4 { void g(); };
struct S0_40D9E4 { char padC[0xC]; S1_40D9E4* mC; };
void f_40D9E4(S0_40D9E4* p) { p->mC->g(); }
