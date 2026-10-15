typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_445080;
struct S0_445080 { char padA6[0xA6]; u8 mA6; };
void f_445080(S0_445080* p) { p->mA6 = 0x1; }
