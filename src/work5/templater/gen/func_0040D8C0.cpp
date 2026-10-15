typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40D8C0;
struct S0_40D8C0 { char padE4[0xE4]; f32 mE4; };
void f_40D8C0(S0_40D8C0* p, f32 v) { p->mE4 = v; }
