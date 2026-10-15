typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EBA20;
struct S0_4EBA20 { char pad7C[0x7C]; u8 m7C; };
void f_4EBA20(S0_4EBA20* p) { p->m7C = 0x1; }
