typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2B1FB4;
struct S1_2B1FB4;
struct S1_2B1FB4 { void g(); };
struct S0_2B1FB4 { char pad510[0x510]; S1_2B1FB4* m510; };
void f_2B1FB4(S0_2B1FB4* p) { p->m510->g(); }
