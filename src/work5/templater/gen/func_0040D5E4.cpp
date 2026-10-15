typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40D5E4;
struct S0_40D5E4 { char padD0[0xD0]; f32 mD0; };
void f_40D5E4(S0_40D5E4* p, f32 v) { p->mD0 = v; }
