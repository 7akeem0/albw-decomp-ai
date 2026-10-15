typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_379B4C;
struct S1_379B4C;
struct S1_379B4C { void g(); };
struct S0_379B4C { char pad48[0x48]; S1_379B4C* m48; };
void f_379B4C(S0_379B4C* p) { p->m48->g(); }
