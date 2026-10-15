typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_16C704;
struct S0_16C704 { char padFA7[0xFA7]; u8 mFA7; };
void f_16C704(S0_16C704* p) { p->mFA7 = 0x1; }
