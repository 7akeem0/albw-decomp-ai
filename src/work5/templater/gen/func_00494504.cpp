typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_494504;
struct S0_494504 { char pad28[0x28]; u32 m28; u32 m2C; };
void f_494504(S0_494504* p, u32 a, u32 b) { p->m28 = a; p->m2C = b; }
