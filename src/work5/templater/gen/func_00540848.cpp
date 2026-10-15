typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_540848;
struct S1_540848;
struct S1_540848 { void g(); };
struct S0_540848 { char pad4C[0x4C]; S1_540848* m4C; };
void f_540848(S0_540848* p) { p->m4C->g(); }
