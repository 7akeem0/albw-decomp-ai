typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DF3E4;
struct S0_2DF3E4 { char pad16[0x16]; u8 m16; };
void f_2DF3E4(S0_2DF3E4* p) { p->m16 = 0x1; }
