typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_428AB4;
struct S1_428AB4;
struct S1_428AB4 { char pad41[0x41]; u8 m41; };
struct S0_428AB4 { S1_428AB4* m0; };
void f_428AB4(S0_428AB4* p, u8 v) { p->m0->m41 = v; }
