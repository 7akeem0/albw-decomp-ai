typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DF0B0;
struct S1_2DF0B0;
struct S1_2DF0B0 { void g(); };
struct S0_2DF0B0 { char pad3C[0x3C]; S1_2DF0B0* m3C; };
void f_2DF0B0(S0_2DF0B0* p) { p->m3C->g(); }
