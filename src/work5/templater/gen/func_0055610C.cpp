typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_55610C;
struct S0_55610C { char pad24[0x24]; u32 m24; };
u32 f_55610C(S0_55610C* p) { return p->m24; }
