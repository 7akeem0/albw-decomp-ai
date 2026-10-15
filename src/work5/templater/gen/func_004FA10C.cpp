typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FA10C;
struct S1_4FA10C;
struct S1_4FA10C { void g(); };
struct S0_4FA10C { char pad48[0x48]; S1_4FA10C* m48; };
void f_4FA10C(S0_4FA10C* p) { p->m48->g(); }
