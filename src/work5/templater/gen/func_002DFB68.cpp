typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DFB68;
struct S1_2DFB68;
struct S1_2DFB68 { char padE[0xE]; u8 mE; };
struct S0_2DFB68 { char pad18[0x18]; S1_2DFB68* m18; };
void f_2DFB68(S0_2DFB68* p) { S1_2DFB68* q = p->m18; q->mE = 0x1; }
