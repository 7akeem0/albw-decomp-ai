typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40E1A8;
struct S0_40E1A8 { char padCC[0xCC]; f32 mCC; };
void f_40E1A8(S0_40E1A8* p, f32 v) { p->mCC = v; }
