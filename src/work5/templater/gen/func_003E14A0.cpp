typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3E14A0;
struct S1_3E14A0;
struct S1_3E14A0 { void g(); };
struct S0_3E14A0 { char pad68[0x68]; S1_3E14A0* m68; };
void f_3E14A0(S0_3E14A0* p) { p->m68->g(); }
