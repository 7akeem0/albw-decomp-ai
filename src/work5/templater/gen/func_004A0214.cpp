typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4A0214;
struct S0_4A0214 { char pad20[0x20]; u32 m20; };
u32 f_4A0214(S0_4A0214* p) { return p->m20; }
