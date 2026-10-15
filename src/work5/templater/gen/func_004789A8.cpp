typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4789A8;
struct S1_4789A8;
struct S1_4789A8 { void g(); };
struct S0_4789A8 { char pad158[0x158]; S1_4789A8* m158; };
void f_4789A8(S0_4789A8* p) { p->m158->g(); }
