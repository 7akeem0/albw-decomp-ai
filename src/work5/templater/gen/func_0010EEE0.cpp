typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_10EEE0;
struct M_10EEE0;
struct M_10EEE0 { void g(); };
struct S0_10EEE0 { char pad10[0x10]; M_10EEE0 m10; };
void f_10EEE0(S0_10EEE0* p) { p->m10.g(); }
