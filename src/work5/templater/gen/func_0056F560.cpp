typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F560;
struct S1_56F560;
struct S1_56F560 { char pad4[0x4]; s16 m4; };
struct S0_56F560 { char padC[0xC]; S1_56F560* mC; };
s16 f_56F560(S0_56F560* p) { return p->mC->m4; }
