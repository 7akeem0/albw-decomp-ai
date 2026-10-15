typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56F854;
struct S1_56F854;
struct S1_56F854 { char pad8[0x8]; u32 m8; };
struct S0_56F854 { char padC[0xC]; S1_56F854* mC; };
u32 f_56F854(S0_56F854* p) { return p->mC->m8; }
