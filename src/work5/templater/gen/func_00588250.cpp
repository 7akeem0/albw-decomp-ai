typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_588250;
struct S1_588250;
struct S1_588250 { void g(); };
struct S0_588250 { char pad48[0x48]; S1_588250* m48; };
void f_588250(S0_588250* p) { p->m48->g(); }
