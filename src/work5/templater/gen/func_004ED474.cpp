typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4ED474;
struct S1_4ED474;
struct S1_4ED474 { void g(); };
struct S0_4ED474 { char pad18[0x18]; S1_4ED474* m18; };
void f_4ED474(S0_4ED474* p) { p->m18->g(); }
