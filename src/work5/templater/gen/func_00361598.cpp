typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361598;
struct S1_361598;
struct S1_361598 { char pad150[0x150]; u8 m150; };
struct S0_361598 { char pad14[0x14]; S1_361598* m14; };
void f_361598(S0_361598* p, u8 v) { p->m14->m150 = v; }
