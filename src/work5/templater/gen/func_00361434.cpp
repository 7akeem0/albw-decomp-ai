typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361434;
struct S1_361434;
struct S1_361434 { void g(); };
struct S0_361434 { char pad14[0x14]; S1_361434* m14; };
void f_361434(S0_361434* p) { p->m14->g(); }
