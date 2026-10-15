typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_47DD20 { void g(f32); };
struct S_47DD20 { char padA4[0xA4]; M_47DD20 m; };
void f_47DD20(S_47DD20* p) { p->m.g(1.0f); }
