typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48BD24;
struct M_48BD24;
struct M_48BD24 { void g(); };
struct S0_48BD24 { char padC[0xC]; M_48BD24 mC; };
void f_48BD24(S0_48BD24* p) { p->mC.g(); }
