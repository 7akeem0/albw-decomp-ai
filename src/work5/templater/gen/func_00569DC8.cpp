typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_569DC8;
struct S0_569DC8 { char pad1C[0x1C]; u32 m1C; };
u32 f_569DC8(S0_569DC8* p) { return p->m1C; }
