typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4F6D98;
struct S1_4F6D98;
struct S1_4F6D98 { void g(); };
struct S0_4F6D98 { char pad8F0[0x8F0]; S1_4F6D98* m8F0; };
void f_4F6D98(S0_4F6D98* p) { p->m8F0->g(); }
