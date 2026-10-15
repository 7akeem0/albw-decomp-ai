typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_293F34;
struct S1_293F34;
struct S1_293F34 { void g(int, int); };
struct S0_293F34 { char pad4C[0x4C]; S1_293F34* m4C; };
void f_293F34(S0_293F34* p) { p->m4C->g(16, 15); }
