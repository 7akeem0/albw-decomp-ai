typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3615D8;
struct S1_3615D8;
struct S1_3615D8 { char padCD[0xCD]; u8 mCD; };
struct S0_3615D8 { char pad14[0x14]; S1_3615D8* m14; };
void f_3615D8(S0_3615D8* p) { S1_3615D8* q = p->m14; q->mCD = 0x0; }
