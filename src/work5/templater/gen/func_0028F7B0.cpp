typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_28F7B0;
struct S1_28F7B0;
struct S1_28F7B0 { void g(); };
struct S0_28F7B0 { char pad48[0x48]; S1_28F7B0* m48; };
void f_28F7B0(S0_28F7B0* p) { p->m48->g(); }
