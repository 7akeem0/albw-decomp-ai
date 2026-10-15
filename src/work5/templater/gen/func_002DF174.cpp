typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DF174;
struct S1_2DF174;
struct S1_2DF174 { void g(); };
struct S0_2DF174 { char pad3C[0x3C]; S1_2DF174* m3C; };
void f_2DF174(S0_2DF174* p) { p->m3C->g(); }
