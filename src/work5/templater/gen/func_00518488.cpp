typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_518488;
struct S1_518488;
struct S1_518488 { void g(); };
struct S0_518488 { char pad14[0x14]; S1_518488* m14; };
void f_518488(S0_518488* p) { p->m14->g(); }
