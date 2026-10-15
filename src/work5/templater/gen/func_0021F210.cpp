typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_21F210;
struct S1_21F210;
struct S1_21F210 { char pad61[0x61]; u8 m61; };
struct S0_21F210 { char pad9F4[0x9F4]; S1_21F210* m9F4; };
void f_21F210(S0_21F210* p) { S1_21F210* q = p->m9F4; q->m61 = 0x0; }
