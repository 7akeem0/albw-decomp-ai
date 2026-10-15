typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_28AAA0;
struct M_28AAA0;
struct M_28AAA0 { void g(); };
struct S0_28AAA0 { char pad5C0[0x5C0]; M_28AAA0 m5C0; };
void f_28AAA0(S0_28AAA0* p) { p->m5C0.g(); }
