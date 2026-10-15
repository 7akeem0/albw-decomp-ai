typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5471AC;
struct S1_5471AC;
struct S1_5471AC { void g(); };
struct S0_5471AC { char pad3C[0x3C]; S1_5471AC* m3C; };
void f_5471AC(S0_5471AC* p) { p->m3C->g(); }
