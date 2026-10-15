typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_41712C;
struct S0_41712C { char pad14[0x14]; f32 m14; };
void f_41712C(S0_41712C* p, f32 v) { p->m14 = v; }
