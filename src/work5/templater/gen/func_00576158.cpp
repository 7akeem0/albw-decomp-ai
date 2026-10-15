typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_576158;
struct S1_576158;
struct S1_576158 { void g(); };
struct S0_576158 { char pad24[0x24]; S1_576158* m24; };
void f_576158(S0_576158* p) { p->m24->g(); }
