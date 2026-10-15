typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_227310;
struct M_227310;
struct M_227310 { void g(); };
struct S0_227310 { char pad48C[0x48C]; M_227310 m48C; };
void f_227310(S0_227310* p) { p->m48C.g(); }
