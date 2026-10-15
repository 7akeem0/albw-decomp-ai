typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_328730;
struct S1_328730;
struct S1_328730 { void g(); };
struct S0_328730 { char pad2F0[0x2F0]; S1_328730* m2F0; };
void f_328730(S0_328730* p) { p->m2F0->g(); }
