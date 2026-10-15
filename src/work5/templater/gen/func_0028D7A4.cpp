typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_28D7A4;
struct S1_28D7A4;
struct S2_28D7A4;
struct S2_28D7A4 { char pad10[0x10]; f32 m10; };
struct S1_28D7A4 { char pad14[0x14]; S2_28D7A4* m14; };
struct S0_28D7A4 { char pad10[0x10]; S1_28D7A4* m10; };
void f_28D7A4(S0_28D7A4* p, f32 v) { p->m10->m14->m10 = v; }
