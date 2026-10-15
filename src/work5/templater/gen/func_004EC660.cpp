typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EC660;
struct S0_4EC660 { char pad7E[0x7E]; u8 m7E; };
void f_4EC660(S0_4EC660* p) { p->m7E = 0x1; }
