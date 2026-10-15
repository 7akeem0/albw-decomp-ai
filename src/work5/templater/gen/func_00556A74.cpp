typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A74;
struct S1_556A74;
struct S1_556A74 { char pad20[0x20]; u8 m20; };
struct S0_556A74 { char pad14[0x14]; S1_556A74* m14; };
u8 f_556A74(S0_556A74* p) { return p->m14->m20; }
