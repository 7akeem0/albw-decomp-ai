typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361604;
struct S1_361604;
struct S1_361604 { char pad6C0[0x6C0]; u8 m6C0; };
struct S0_361604 { char pad10[0x10]; S1_361604* m10; };
void f_361604(S0_361604* p, u8 v) { p->m10->m6C0 = v; }
