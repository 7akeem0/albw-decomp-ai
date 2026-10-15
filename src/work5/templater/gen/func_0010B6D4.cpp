typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_10B6D4;
struct S0_10B6D4 { char pad8[0x8]; u32 m8; u32 mC; };
void f_10B6D4(S0_10B6D4* p, u32 a, u32 b) { p->m8 = a; p->mC = b; }
