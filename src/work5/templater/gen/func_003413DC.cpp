typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3413DC;
struct S1_3413DC;
struct S1_3413DC { void g(); };
struct S0_3413DC { char pad18[0x18]; S1_3413DC* m18; };
void f_3413DC(S0_3413DC* p) { p->m18->g(); }
