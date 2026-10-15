typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_41D7F4;
struct M_41D7F4;
struct M_41D7F4 { void g(); };
struct S0_41D7F4 { char pad8[0x8]; M_41D7F4 m8; };
void f_41D7F4(S0_41D7F4* p) { p->m8.g(); }
