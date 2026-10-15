typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3B0504;
struct S1_3B0504;
struct S1_3B0504 { void g(int, int); };
struct S0_3B0504 { char pad40[0x40]; S1_3B0504* m40; };
void f_3B0504(S0_3B0504* p, int a1) { p->m40->g(a1, 0); }
