typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_25F99C { char pad7C[0x7C]; f32 m7C; };
void f_25F99C(S_25F99C* p) { p->m7C = 0.0f; }
