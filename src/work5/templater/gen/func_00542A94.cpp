typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_542A94;
struct S1_542A94;
struct S1_542A94 { void g(); };
struct S0_542A94 { char pad510[0x510]; S1_542A94* m510; };
void f_542A94(S0_542A94* p) { p->m510->g(); }
