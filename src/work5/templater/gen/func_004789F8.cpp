typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4789F8;
struct S1_4789F8;
struct S1_4789F8 { void g(); };
struct S0_4789F8 { char pad158[0x158]; S1_4789F8* m158; };
void f_4789F8(S0_4789F8* p) { p->m158->g(); }
