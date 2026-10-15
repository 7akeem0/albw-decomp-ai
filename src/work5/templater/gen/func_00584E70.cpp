typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_584E70;
struct S1_584E70;
struct S1_584E70 { char pad14[0x14]; s8 m14; };
struct S0_584E70 { char pad150[0x150]; S1_584E70* m150; };
s8 f_584E70(S0_584E70* p) { return p->m150->m14; }
