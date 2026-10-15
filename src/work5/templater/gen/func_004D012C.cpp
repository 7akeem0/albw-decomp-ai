typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4D012C;
struct S1_4D012C;
struct S1_4D012C { void g(); };
struct S0_4D012C { char pad8[0x8]; S1_4D012C* m8; };
void f_4D012C(S0_4D012C* p) { p->m8->g(); }
