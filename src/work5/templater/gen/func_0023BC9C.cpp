typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_23BC9C;
struct S1_23BC9C;
struct S1_23BC9C { char pad61[0x61]; u8 m61; };
struct S0_23BC9C { char pad40C[0x40C]; S1_23BC9C* m40C; };
void f_23BC9C(S0_23BC9C* p) { S1_23BC9C* q = p->m40C; q->m61 = 0x0; }
