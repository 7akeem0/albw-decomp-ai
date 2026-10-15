typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_33AD54;
struct S1_33AD54;
struct S1_33AD54 { void g(int, int); };
struct S0_33AD54 { char pad40C[0x40C]; S1_33AD54* m40C; };
void f_33AD54(S0_33AD54* p) { p->m40C->g(1, 0); }
