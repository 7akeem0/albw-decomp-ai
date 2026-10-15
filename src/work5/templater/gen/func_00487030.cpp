typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_487030;
struct M_487030;
struct M_487030 { void g(); };
struct S0_487030 { char pad74[0x74]; M_487030 m74; };
void f_487030(S0_487030* p) { p->m74.g(); }
