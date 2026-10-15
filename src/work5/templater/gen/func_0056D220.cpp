typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56D220;
struct S1_56D220;
struct S1_56D220 { void g(); };
struct S0_56D220 { char pad4[0x4]; S1_56D220* m4; };
void f_56D220(S0_56D220* p) { p->m4->g(); }
