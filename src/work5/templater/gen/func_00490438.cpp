typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_490438;
struct S1_490438;
struct S1_490438 { void g(); };
struct S0_490438 { char pad50[0x50]; S1_490438* m50; };
void f_490438(S0_490438* p) { p->m50->g(); }
