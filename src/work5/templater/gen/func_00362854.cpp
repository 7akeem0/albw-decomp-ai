typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_362854;
struct S1_362854;
struct S1_362854 { void g(int, int); };
struct S0_362854 { char pad14[0x14]; S1_362854* m14; };
void f_362854(S0_362854* p, int a1) { p->m14->g(a1, 0); }
