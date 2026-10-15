typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_10B40C;
struct S1_10B40C;
struct S1_10B40C { char pad24[0x24]; f32 m24; };
struct S0_10B40C { char padC[0xC]; S1_10B40C* mC; };
void f_10B40C(S0_10B40C* p, f32 v) { p->mC->m24 = v; }
