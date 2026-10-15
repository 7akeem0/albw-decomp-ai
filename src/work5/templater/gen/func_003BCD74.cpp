typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BCD74;
struct S1_3BCD74;
struct S1_3BCD74 { void g(int, int); };
struct S0_3BCD74 { char pad34[0x34]; S1_3BCD74* m34; };
void f_3BCD74(S0_3BCD74* p, int a1) { p->m34->g(a1, 0); }
