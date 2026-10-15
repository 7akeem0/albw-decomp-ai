typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297948;
struct S1_297948;
struct S1_297948 { void g(); };
struct S0_297948 { char pad44[0x44]; S1_297948* m44; };
void f_297948(S0_297948* p) { p->m44->g(); }
