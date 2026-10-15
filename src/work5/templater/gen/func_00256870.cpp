typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_256870;
struct S1_256870;
struct S1_256870 { void g(); };
struct S0_256870 { char pad18[0x18]; S1_256870* m18; };
void f_256870(S0_256870* p) { p->m18->g(); }
