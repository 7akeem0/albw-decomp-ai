typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2C42F0;
struct S0_2C42F0 { char pad3E[0x3E]; u8 m3E; };
void f_2C42F0(S0_2C42F0* p, u8 v) { p->m3E = v; }
