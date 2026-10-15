typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_478928;
struct S1_478928;
struct S1_478928 { void g(); };
struct S0_478928 { char pad158[0x158]; S1_478928* m158; };
void f_478928(S0_478928* p) { p->m158->g(); }
