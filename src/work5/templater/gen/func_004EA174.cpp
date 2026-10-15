typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EA174;
struct S1_4EA174;
struct S1_4EA174 { void g(); };
struct S0_4EA174 { char pad34[0x34]; S1_4EA174* m34; };
void f_4EA174(S0_4EA174* p) { p->m34->g(); }
