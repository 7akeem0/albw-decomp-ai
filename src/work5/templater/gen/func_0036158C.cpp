typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_36158C;
struct S1_36158C;
struct S1_36158C { char pad6BC[0x6BC]; u8 m6BC; };
struct S0_36158C { char pad10[0x10]; S1_36158C* m10; };
void f_36158C(S0_36158C* p, u8 v) { p->m10->m6BC = v; }
