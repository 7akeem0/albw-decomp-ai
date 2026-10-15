typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_317F3C;
struct S1_317F3C;
struct S1_317F3C { char pad61[0x61]; u8 m61; };
struct S0_317F3C { char pad434[0x434]; S1_317F3C* m434; };
void f_317F3C(S0_317F3C* p) { S1_317F3C* q = p->m434; q->m61 = 0x0; }
