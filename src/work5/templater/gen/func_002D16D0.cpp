typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2D16D0;
struct S1_2D16D0;
struct S1_2D16D0 { void g(); };
struct S0_2D16D0 { char pad28[0x28]; S1_2D16D0* m28; };
void f_2D16D0(S0_2D16D0* p) { p->m28->g(); }
