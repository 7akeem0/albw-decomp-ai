typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_407A1C;
struct S1_407A1C;
struct S1_407A1C { void g(); };
struct S0_407A1C { char pad8[0x8]; S1_407A1C* m8; };
void f_407A1C(S0_407A1C* p) { p->m8->g(); }
