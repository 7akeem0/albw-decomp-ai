typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_421C18;
struct S0_421C18 { char pad18[0x18]; u32 m18; u32 m1C; };
void f_421C18(S0_421C18* p, u32 a, u32 b) { p->m18 = a; p->m1C = b; }
