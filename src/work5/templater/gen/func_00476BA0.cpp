typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_476BA0;
struct S1_476BA0;
struct S1_476BA0 { void g(); };
struct S0_476BA0 { char pad158[0x158]; S1_476BA0* m158; };
void f_476BA0(S0_476BA0* p) { p->m158->g(); }
