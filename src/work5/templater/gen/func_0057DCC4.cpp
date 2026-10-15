typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57DCC4;
struct S0_57DCC4 { char padC[0xC]; u32 mC; };
u32 f_57DCC4(S0_57DCC4* p) { return p->mC; }
