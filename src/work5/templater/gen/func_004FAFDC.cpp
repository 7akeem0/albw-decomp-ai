typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FAFDC;
struct S0_4FAFDC { char pad798[0x798]; f32 m798; };
void f_4FAFDC(S0_4FAFDC* p, f32 v) { p->m798 = v; }
