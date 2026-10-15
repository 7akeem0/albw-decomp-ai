typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40DA20;
struct S0_40DA20 { char pad18[0x18]; u32 m18; };
void f_40DA20(S0_40DA20* p) { p->m18 = 0x0; }
