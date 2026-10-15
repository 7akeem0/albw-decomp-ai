typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_14AC1C;
struct S0_14AC1C { char pad24[0x24]; u8 m24; };
void f_14AC1C(S0_14AC1C* p) { p->m24 = 0x1; }
