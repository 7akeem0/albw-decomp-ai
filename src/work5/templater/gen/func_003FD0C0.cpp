typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3FD0C0;
struct S1_3FD0C0;
struct S1_3FD0C0 { void g(); };
struct S0_3FD0C0 { char padC4[0xC4]; S1_3FD0C0* mC4; };
void f_3FD0C0(S0_3FD0C0* p) { p->mC4->g(); }
