typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3ACFB4;
struct S0_3ACFB4 { char pad2D7[0x2D7]; u8 m2D7; };
void f_3ACFB4(S0_3ACFB4* p) { p->m2D7 = 0x1; }
