typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_4647B0 { void h(); };
struct S_4647B0 { char pad88[0x88]; M_4647B0 m; void g(); };
void f_4647B0(S_4647B0* p) { p->g(); p->m.h(); }
