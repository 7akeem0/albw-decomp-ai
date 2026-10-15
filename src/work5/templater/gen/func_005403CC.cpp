typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5403CC;
struct S1_5403CC;
struct S1_5403CC { void g(); };
struct S0_5403CC { char pad4C[0x4C]; S1_5403CC* m4C; };
void f_5403CC(S0_5403CC* p) { p->m4C->g(); }
