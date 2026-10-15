typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_35E010;
struct S1_35E010;
struct S1_35E010 { char pad61[0x61]; u8 m61; };
struct S0_35E010 { char pad438[0x438]; S1_35E010* m438; };
void f_35E010(S0_35E010* p) { S1_35E010* q = p->m438; q->m61 = 0x0; }
