typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361784;
struct S1_361784;
struct S1_361784 { char padCF[0xCF]; u8 mCF; };
struct S0_361784 { char pad14[0x14]; S1_361784* m14; };
void f_361784(S0_361784* p, u8 v) { p->m14->mCF = v; }
