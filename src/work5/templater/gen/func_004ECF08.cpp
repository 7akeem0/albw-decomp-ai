typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4ECF08;
struct S0_4ECF08 { char pad2D6[0x2D6]; u8 m2D6; };
void f_4ECF08(S0_4ECF08* p) { p->m2D6 = 0x1; }
