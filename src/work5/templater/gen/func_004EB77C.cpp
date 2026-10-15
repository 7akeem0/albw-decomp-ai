typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EB77C;
struct S1_4EB77C;
struct S1_4EB77C { char padA1[0xA1]; u8 mA1; };
struct S0_4EB77C { char pad34[0x34]; S1_4EB77C* m34; };
void f_4EB77C(S0_4EB77C* p) { S1_4EB77C* q = p->m34; q->mA1 = 0x0; }
