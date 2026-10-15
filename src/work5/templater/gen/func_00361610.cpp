typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_361610;
struct S1_361610;
struct S1_361610 { char pad6C4[0x6C4]; u8 m6C4; };
struct S0_361610 { char pad10[0x10]; S1_361610* m10; };
void f_361610(S0_361610* p, u8 v) { p->m10->m6C4 = v; }
