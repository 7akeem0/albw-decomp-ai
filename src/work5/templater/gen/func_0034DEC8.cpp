typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_34DEC8 { char pad22C[0x22C]; u8 m22C; u8 m22D; };
void f_34DEC8(S_34DEC8* p) { p->m22C = 1; p->m22D = 1; }
