typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53FD24;
struct S1_53FD24;
struct S1_53FD24 { void g(int); };
struct S0_53FD24 { char pad14[0x14]; S1_53FD24* m14; };
void f_53FD24(S0_53FD24* p) { p->m14->g(0); }
