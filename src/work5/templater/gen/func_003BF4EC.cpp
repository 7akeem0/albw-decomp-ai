typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BF4EC;
struct S1_3BF4EC;
struct S1_3BF4EC { void g(); };
struct S0_3BF4EC { char pad48[0x48]; S1_3BF4EC* m48; };
void f_3BF4EC(S0_3BF4EC* p) { p->m48->g(); }
