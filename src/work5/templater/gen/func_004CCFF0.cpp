typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4CCFF0 { char pad20[0x20]; f32 m20; };
void f_4CCFF0(S_4CCFF0* p) { p->m20 = 0.0f; }
