typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3FDD7C;
struct S0_3FDD7C { char pad14[0x14]; u8 m14; };
void f_3FDD7C(S0_3FDD7C* p, u8 v) { p->m14 = v; }
