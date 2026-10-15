typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_367DAC;
struct S1_367DAC;
struct S1_367DAC { void g(); };
struct S0_367DAC { char padE0[0xE0]; S1_367DAC* mE0; };
void f_367DAC(S0_367DAC* p) { p->mE0->g(); }
