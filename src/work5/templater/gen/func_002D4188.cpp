typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2D4188;
struct S1_2D4188;
struct S1_2D4188 { void g(int, int); };
struct S0_2D4188 { char pad4[0x4]; S1_2D4188* m4; };
void f_2D4188(S0_2D4188* p, int a1) { p->m4->g(a1, 0); }
