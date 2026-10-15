typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3BD478;
struct S1_3BD478;
struct S1_3BD478 { void g(); };
struct S0_3BD478 { char pad48[0x48]; S1_3BD478* m48; };
void f_3BD478(S0_3BD478* p) { p->m48->g(); }
