typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_4745C8 { void h(); };
struct S_4745C8 { char pad74[0x74]; M_4745C8 m; void g(); };
void f_4745C8(S_4745C8* p) { p->g(); p->m.h(); }
