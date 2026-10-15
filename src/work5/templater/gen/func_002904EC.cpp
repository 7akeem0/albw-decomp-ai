typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2904EC;
struct S0_2904EC { char pad84[0x84]; u8 m84; };
void f_2904EC(S0_2904EC* p) { p->m84 = 0xff; }
