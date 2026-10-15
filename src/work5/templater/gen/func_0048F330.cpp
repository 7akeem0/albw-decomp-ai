typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48F330;
struct M_48F330;
struct M_48F330 { void g(); };
struct S0_48F330 { char pad4[0x4]; M_48F330 m4; };
void f_48F330(S0_48F330* p) { p->m4.g(); }
