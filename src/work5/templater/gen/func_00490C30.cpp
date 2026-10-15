typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_490C30;
struct M_490C30;
struct M_490C30 { void g(); };
struct S0_490C30 { char pad6C[0x6C]; M_490C30 m6C; };
void f_490C30(S0_490C30* p) { p->m6C.g(); }
