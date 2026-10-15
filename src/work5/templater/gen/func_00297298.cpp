typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297298;
struct S1_297298;
struct S1_297298 { void g(); };
struct S0_297298 { char pad4C[0x4C]; S1_297298* m4C; };
void f_297298(S0_297298* p) { p->m4C->g(); }
