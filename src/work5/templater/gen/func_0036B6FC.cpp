typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_36B6FC;
struct M_36B6FC;
struct M_36B6FC { void g(); };
struct S0_36B6FC { char pad8C8[0x8C8]; M_36B6FC m8C8; };
void f_36B6FC(S0_36B6FC* p) { p->m8C8.g(); }
