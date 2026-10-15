typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_16A910;
struct S0_16A910 { char padFA8[0xFA8]; u8 mFA8; };
void f_16A910(S0_16A910* p) { p->mFA8 = 0x1; }
