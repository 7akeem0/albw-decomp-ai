typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DEEF8;
struct S1_2DEEF8;
struct S1_2DEEF8 { void g(); };
struct S0_2DEEF8 { char pad3C[0x3C]; S1_2DEEF8* m3C; };
void f_2DEEF8(S0_2DEEF8* p) { p->m3C->g(); }
