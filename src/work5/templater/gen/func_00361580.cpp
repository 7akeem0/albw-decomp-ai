typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361580;
struct S1_361580;
struct S1_361580 { char pad7C[0x7C]; u8 m7C; };
struct S0_361580 { char pad14[0x14]; S1_361580* m14; };
void f_361580(S0_361580* p, u8 v) { p->m14->m7C = v; }
