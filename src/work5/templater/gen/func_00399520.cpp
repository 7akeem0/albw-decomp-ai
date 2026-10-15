typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_399520;
struct S1_399520;
struct S1_399520 { void g(int, int); };
struct S0_399520 { char pad34[0x34]; S1_399520* m34; };
void f_399520(S0_399520* p, int a1) { p->m34->g(a1, 0); }
