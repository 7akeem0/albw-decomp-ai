typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1150B0;
struct M_1150B0;
struct M_1150B0 { void g(); };
struct S0_1150B0 { char pad4[0x4]; M_1150B0 m4; };
void f_1150B0(S0_1150B0* p) { p->m4.g(); }
