typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3B39F0;
struct S1_3B39F0;
struct S1_3B39F0 { void g(); };
struct S0_3B39F0 { char pad48[0x48]; S1_3B39F0* m48; };
void f_3B39F0(S0_3B39F0* p) { p->m48->g(); }
