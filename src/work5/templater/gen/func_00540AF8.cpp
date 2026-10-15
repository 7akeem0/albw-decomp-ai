typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_540AF8;
struct S1_540AF8;
struct S1_540AF8 { virtual void t(int); };
struct S0_540AF8 { char pad14[0x14]; S1_540AF8* m14; };
void f_540AF8(S0_540AF8* p, int a1) { p->m14->t(a1); }
