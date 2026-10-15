typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_51C080;
struct S1_51C080;
struct S1_51C080 { char padC6[0xC6]; u8 mC6; };
struct S0_51C080 { char padF0[0xF0]; S1_51C080* mF0; };
void f_51C080(S0_51C080* p) { S1_51C080* q = p->mF0; q->mC6 = 0x1; }
