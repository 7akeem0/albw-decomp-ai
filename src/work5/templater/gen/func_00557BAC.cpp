typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_557BAC;
struct S0_557BAC { char pad24[0x24]; u32 m24; };
u32 f_557BAC(S0_557BAC* p) { return p->m24; }
