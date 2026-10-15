typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3616C4;
struct S1_3616C4;
struct S1_3616C4 { char pad6CC[0x6CC]; f32 m6CC; };
struct S0_3616C4 { char pad10[0x10]; S1_3616C4* m10; };
void f_3616C4(S0_3616C4* p, f32 v) { p->m10->m6CC = v; }
