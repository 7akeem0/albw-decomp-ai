typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3248F0;
struct S1_3248F0;
struct S1_3248F0 { void g(); };
struct S0_3248F0 { char pad520[0x520]; S1_3248F0* m520; };
void f_3248F0(S0_3248F0* p) { p->m520->g(); }
