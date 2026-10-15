typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4288A4;
struct S1_4288A4;
struct S1_4288A4 { char pad34[0x34]; u16 m34; };
struct S0_4288A4 { S1_4288A4* m0; };
void f_4288A4(S0_4288A4* p, u16 v) { p->m0->m34 = v; }
