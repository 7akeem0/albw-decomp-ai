typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_36164C;
struct S1_36164C;
struct S1_36164C { char pad6C8[0x6C8]; u8 m6C8; };
struct S0_36164C { char pad10[0x10]; S1_36164C* m10; };
void f_36164C(S0_36164C* p, u8 v) { p->m10->m6C8 = v; }
