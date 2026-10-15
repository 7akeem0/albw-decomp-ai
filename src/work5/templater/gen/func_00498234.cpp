typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_498234;
struct M_498234;
struct M_498234 { void g(); };
struct S0_498234 { char pad10[0x10]; M_498234 m10; };
void f_498234(S0_498234* p) { p->m10.g(); }
