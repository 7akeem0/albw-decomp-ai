typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BB2C4;
struct S1_3BB2C4;
struct S1_3BB2C4 { void g(int, int); };
struct S0_3BB2C4 { char pad34[0x34]; S1_3BB2C4* m34; };
void f_3BB2C4(S0_3BB2C4* p, int a1) { p->m34->g(a1, 0); }
