typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40D5EC;
struct S0_40D5EC { char padD8[0xD8]; f32 mD8; };
void f_40D5EC(S0_40D5EC* p, f32 v) { p->mD8 = v; }
