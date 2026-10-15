typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_495028;
struct M_495028;
struct M_495028 { void g(); };
struct S0_495028 { char pad24[0x24]; M_495028 m24; };
void f_495028(S0_495028* p) { p->m24.g(); }
