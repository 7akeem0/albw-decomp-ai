typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3A3BDC;
struct S0_3A3BDC { char pad3C[0x3C]; u8 m3C; };
void f_3A3BDC(S0_3A3BDC* p) { p->m3C = 0x1; }
