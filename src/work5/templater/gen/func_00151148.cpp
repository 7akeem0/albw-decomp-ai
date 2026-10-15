typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_151148;
struct S1_151148;
struct S1_151148 { void g(); };
struct S0_151148 { char pad1C[0x1C]; S1_151148* m1C; };
void f_151148(S0_151148* p) { p->m1C->g(); }
