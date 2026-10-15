typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_428968;
struct S1_428968;
struct S1_428968 { char pad24[0x24]; u16 m24; };
struct S0_428968 { S1_428968* m0; };
void f_428968(S0_428968* p, u16 v) { p->m0->m24 = v; }
