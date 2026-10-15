typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4BE2E0;
struct S0_4BE2E0 { char pad24[0x24]; u32 m24; };
u32 f_4BE2E0(S0_4BE2E0* p) { return p->m24; }
