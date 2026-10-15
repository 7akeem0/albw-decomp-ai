typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_295B6C;
struct S1_295B6C;
struct S1_295B6C { void g(); };
struct S0_295B6C { char pad4C[0x4C]; S1_295B6C* m4C; };
void f_295B6C(S0_295B6C* p) { p->m4C->g(); }
