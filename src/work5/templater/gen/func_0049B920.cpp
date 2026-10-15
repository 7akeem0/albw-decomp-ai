typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49B920;
struct M_49B920;
struct M_49B920 { void g(); };
struct S0_49B920 { char padBC[0xBC]; M_49B920 mBC; };
void f_49B920(S0_49B920* p) { p->mBC.g(); }
