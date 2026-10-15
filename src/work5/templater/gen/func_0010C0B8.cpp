typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_10C0B8;
struct M_10C0B8;
struct M_10C0B8 { void g(); };
struct S0_10C0B8 { char pad10[0x10]; M_10C0B8 m10; };
void f_10C0B8(S0_10C0B8* p) { p->m10.g(); }
