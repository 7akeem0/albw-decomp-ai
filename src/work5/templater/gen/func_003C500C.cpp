typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C500C;
struct S1_3C500C;
struct S1_3C500C { char pad935[0x935]; u8 m935; };
struct S0_3C500C { char pad48[0x48]; S1_3C500C* m48; };
void f_3C500C(S0_3C500C* p) { S1_3C500C* q = p->m48; q->m935 = 0x0; }
