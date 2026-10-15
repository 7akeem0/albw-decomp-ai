typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_408830;
struct M_408830;
struct M_408830 { void g(); };
struct S0_408830 { char pad4[0x4]; M_408830 m4; };
void f_408830(S0_408830* p) { p->m4.g(); }
