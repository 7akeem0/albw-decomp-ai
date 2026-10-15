typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2D55C4;
struct S1_2D55C4;
struct S1_2D55C4 { void g(int); };
struct S0_2D55C4 { char pad48[0x48]; S1_2D55C4* m48; };
void f_2D55C4(S0_2D55C4* p) { p->m48->g(141); }
