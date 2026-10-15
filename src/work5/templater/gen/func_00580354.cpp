typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_580354;
struct S0_580354 { char pad1C[0x1C]; u32 m1C; };
u32 f_580354(S0_580354* p) { return p->m1C; }
