typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_421C24;
struct S0_421C24 { char pad20[0x20]; u32 m20; u32 m24; };
void f_421C24(S0_421C24* p, u32 a, u32 b) { p->m20 = a; p->m24 = b; }
