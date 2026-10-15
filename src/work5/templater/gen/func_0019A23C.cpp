typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_19A23C;
struct S1_19A23C;
struct S1_19A23C { char pad68[0x68]; u32 m68; };
struct S0_19A23C { char pad14[0x14]; S1_19A23C* m14; };
u32 f_19A23C(S0_19A23C* p) { return p->m14->m68; }
