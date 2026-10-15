typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3AB434;
struct S1_3AB434;
struct S1_3AB434 { void g(int, int); };
struct S0_3AB434 { char pad34[0x34]; S1_3AB434* m34; };
void f_3AB434(S0_3AB434* p, int a1) { p->m34->g(a1, 0); }
