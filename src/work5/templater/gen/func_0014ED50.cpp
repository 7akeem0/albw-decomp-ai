typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_14ED50;
struct S1_14ED50;
struct S1_14ED50 { void g(); };
struct S0_14ED50 { char pad40C[0x40C]; S1_14ED50* m40C; };
void f_14ED50(S0_14ED50* p) { p->m40C->g(); }
