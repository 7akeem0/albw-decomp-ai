typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_543170;
struct S0_543170 { char padB42[0xB42]; s8 mB42; };
s8 f_543170(S0_543170* p) { return p->mB42; }
