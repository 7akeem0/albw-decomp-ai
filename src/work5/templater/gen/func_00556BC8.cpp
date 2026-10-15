typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556BC8;
struct S1_556BC8;
struct S1_556BC8 { char padCA[0xCA]; s8 mCA; };
struct S0_556BC8 { char pad14[0x14]; S1_556BC8* m14; };
s8 f_556BC8(S0_556BC8* p) { return p->m14->mCA; }
