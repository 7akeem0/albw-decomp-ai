typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5084AC;
struct S1_5084AC;
struct S1_5084AC { char pad61[0x61]; u8 m61; };
struct S0_5084AC { char pad424[0x424]; S1_5084AC* m424; };
void f_5084AC(S0_5084AC* p) { S1_5084AC* q = p->m424; q->m61 = 0x0; }
