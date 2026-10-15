typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DEAC8;
struct S1_2DEAC8;
struct S1_2DEAC8 { void g(); };
struct S0_2DEAC8 { char pad3C[0x3C]; S1_2DEAC8* m3C; };
void f_2DEAC8(S0_2DEAC8* p) { p->m3C->g(); }
