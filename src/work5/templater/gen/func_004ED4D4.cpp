typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4ED4D4;
struct S1_4ED4D4;
struct S1_4ED4D4 { void g(); };
struct S0_4ED4D4 { char pad18[0x18]; S1_4ED4D4* m18; };
void f_4ED4D4(S0_4ED4D4* p) { p->m18->g(); }
