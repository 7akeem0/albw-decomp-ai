typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4540BC;
struct S1_4540BC;
struct S1_4540BC { char padE[0xE]; u8 mE; };
struct S0_4540BC { char pad9C[0x9C]; S1_4540BC* m9C; };
void f_4540BC(S0_4540BC* p) { S1_4540BC* q = p->m9C; q->mE = 0x1; }
