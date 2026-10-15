typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2FCC2C;
struct S1_2FCC2C;
struct S1_2FCC2C { void g(); };
struct S0_2FCC2C { char pad488[0x488]; S1_2FCC2C* m488; };
void f_2FCC2C(S0_2FCC2C* p) { p->m488->g(); }
