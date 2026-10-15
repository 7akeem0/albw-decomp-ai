typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56BAF0;
struct S1_56BAF0;
struct S1_56BAF0 { void g(); };
struct S0_56BAF0 { char pad8[0x8]; S1_56BAF0* m8; };
void f_56BAF0(S0_56BAF0* p) { p->m8->g(); }
