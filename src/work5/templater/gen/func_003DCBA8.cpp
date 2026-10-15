typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3DCBA8;
struct S0_3DCBA8 { char pad3[0x3]; u8 m3; };
u8 f_3DCBA8(S0_3DCBA8* p) { return p->m3; }
