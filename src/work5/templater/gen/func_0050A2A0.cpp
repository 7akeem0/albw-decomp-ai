typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_50A2A0;
struct S1_50A2A0;
struct S1_50A2A0 { void g(int, int); };
struct S0_50A2A0 { char pad40C[0x40C]; S1_50A2A0* m40C; };
void f_50A2A0(S0_50A2A0* p) { p->m40C->g(1, 0); }
