typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_417A30;
struct S0_417A30 { char pad10[0x10]; f32 m10; };
void f_417A30(S0_417A30* p, f32 v) { p->m10 = v; }
