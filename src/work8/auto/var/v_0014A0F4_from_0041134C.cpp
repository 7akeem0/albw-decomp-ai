typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_41134C;
struct S0_41134C { char pad4[0x8c]; u32 m4; };
void f_41134C(S0_41134C* p, u32 v) { p->m4 = v; }
