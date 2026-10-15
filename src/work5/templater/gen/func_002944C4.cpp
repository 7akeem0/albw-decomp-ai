typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2944C4;
struct S1_2944C4;
struct S1_2944C4 { void g(); };
struct S0_2944C4 { char pad4C[0x4C]; S1_2944C4* m4C; };
void f_2944C4(S0_2944C4* p) { p->m4C->g(); }
