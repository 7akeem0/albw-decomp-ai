typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556060;
struct S1_556060;
struct S1_556060 { void g(); };
struct S0_556060 { char pad1C[0x1C]; S1_556060* m1C; };
void f_556060(S0_556060* p) { p->m1C->g(); }
