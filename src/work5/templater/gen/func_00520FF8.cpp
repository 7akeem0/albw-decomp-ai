typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_520FF8;
struct S0_520FF8 { char pad38F[0x38F]; s8 m38F; };
s8 f_520FF8(S0_520FF8* p) { return p->m38F; }
