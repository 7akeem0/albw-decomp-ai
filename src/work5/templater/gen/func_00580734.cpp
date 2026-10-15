typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_580734;
struct S0_580734 { char pad20[0x20]; u32 m20; };
u32 f_580734(S0_580734* p) { return p->m20; }
