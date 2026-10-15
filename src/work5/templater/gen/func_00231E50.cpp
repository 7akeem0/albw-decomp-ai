typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_231E50;
struct S1_231E50;
struct S1_231E50 { void g(); };
struct S0_231E50 { char pad1EC[0x1EC]; S1_231E50* m1EC; };
void f_231E50(S0_231E50* p) { p->m1EC->g(); }
