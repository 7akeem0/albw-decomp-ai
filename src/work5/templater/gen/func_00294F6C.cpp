typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_294F6C;
struct S1_294F6C;
struct S1_294F6C { void g(); };
struct S0_294F6C { char pad4C[0x4C]; S1_294F6C* m4C; };
void f_294F6C(S0_294F6C* p) { p->m4C->g(); }
