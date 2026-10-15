typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2C3524;
struct S1_2C3524;
struct S1_2C3524 { void g(); };
struct S0_2C3524 { char pad1C[0x1C]; S1_2C3524* m1C; };
void f_2C3524(S0_2C3524* p) { p->m1C->g(); }
