typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1449E4;
struct S1_1449E4;
struct S1_1449E4 { char pad44[0x44]; u8 m44; };
struct S0_1449E4 { char pad7BC[0x7BC]; S1_1449E4* m7BC; };
void f_1449E4(S0_1449E4* p) { S1_1449E4* q = p->m7BC; q->m44 = 0x0; }
