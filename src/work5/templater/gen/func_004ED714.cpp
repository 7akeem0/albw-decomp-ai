typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4ED714;
struct S1_4ED714;
struct S1_4ED714 { void g(); };
struct S0_4ED714 { char pad18[0x18]; S1_4ED714* m18; };
void f_4ED714(S0_4ED714* p) { p->m18->g(); }
