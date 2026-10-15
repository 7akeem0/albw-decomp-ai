typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40DB44;
struct S0_40DB44 { char padC8[0xC8]; f32 mC8; };
void f_40DB44(S0_40DB44* p, f32 v) { p->mC8 = v; }
