typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EB8A8;
struct S1_4EB8A8;
struct S1_4EB8A8 { char padA1[0xA1]; u8 mA1; };
struct S0_4EB8A8 { char pad34[0x34]; S1_4EB8A8* m34; };
void f_4EB8A8(S0_4EB8A8* p) { S1_4EB8A8* q = p->m34; q->mA1 = 0x1; }
