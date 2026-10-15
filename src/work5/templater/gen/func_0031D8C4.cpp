typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_31D8C4;
struct S1_31D8C4;
struct S1_31D8C4 { void g(); };
struct S0_31D8C4 { char padF4[0xF4]; S1_31D8C4* mF4; };
void f_31D8C4(S0_31D8C4* p) { p->mF4->g(); }
