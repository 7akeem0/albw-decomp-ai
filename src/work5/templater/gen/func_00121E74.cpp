typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_121E74;
struct S1_121E74;
struct S1_121E74 { void g(); };
struct S0_121E74 { char pad18[0x18]; S1_121E74* m18; };
void f_121E74(S0_121E74* p) { p->m18->g(); }
