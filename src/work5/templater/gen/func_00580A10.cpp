typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_580A10;
struct S0_580A10 { char pad20[0x20]; u32 m20; };
u32 f_580A10(S0_580A10* p) { return p->m20; }
