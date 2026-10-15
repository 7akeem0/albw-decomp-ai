typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_101F74;
struct S0_101F74 { char pad10[0x10]; u32 m10; };
void f_101F74(S0_101F74* p) { p->m10 = 0x2; }
