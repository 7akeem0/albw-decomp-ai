typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_490B58;
struct M_490B58;
struct M_490B58 { void g(); };
struct S0_490B58 { char pad394[0x394]; M_490B58 m394; };
void f_490B58(S0_490B58* p) { p->m394.g(); }
