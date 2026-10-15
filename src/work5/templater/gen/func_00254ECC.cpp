typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_254ECC;
struct S1_254ECC;
struct S1_254ECC { char padC[0xC]; u32 mC; };
struct S0_254ECC { char pad14[0x14]; S1_254ECC* m14; };
void f_254ECC(S0_254ECC* p, u32 v) { p->m14->mC = v; }
