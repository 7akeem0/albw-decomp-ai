typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53EE20;
struct S1_53EE20;
struct S2_53EE20;
struct S2_53EE20 { char pad10[0x10]; f32 m10; };
struct S1_53EE20 { char pad14[0x14]; S2_53EE20* m14; };
struct S0_53EE20 { char pad10[0x10]; S1_53EE20* m10; };
f32 f_53EE20(S0_53EE20* p) { return p->m10->m14->m10; }
