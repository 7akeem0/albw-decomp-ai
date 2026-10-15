typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_351BF0;
struct S1_351BF0;
struct S1_351BF0 { void g(); };
struct S0_351BF0 { char pad184[0x184]; S1_351BF0* m184; };
void f_351BF0(S0_351BF0* p) { p->m184->g(); }
