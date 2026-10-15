typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_149D90;
struct S1_149D90;
struct S1_149D90 { void g(); };
struct S0_149D90 { char pad34[0x34]; S1_149D90* m34; };
void f_149D90(S0_149D90* p) { p->m34->g(); }
