typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_409D98 { char pad14[0x14]; u32 m14; u32 m18; u32 m1C; };
void f_409D98(S_409D98* p) { p->m14 = 0; p->m18 = 0; p->m1C = 0; }
