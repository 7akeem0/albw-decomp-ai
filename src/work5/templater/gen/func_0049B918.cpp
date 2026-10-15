typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49B918;
struct M_49B918;
struct M_49B918 { void g(); };
struct S0_49B918 { char pad6C[0x6C]; M_49B918 m6C; };
void f_49B918(S0_49B918* p) { p->m6C.g(); }
