typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_4838F4 { void g(f32); };
struct S_4838F4 { char padA4[0xA4]; M_4838F4 m; };
void f_4838F4(S_4838F4* p) { p->m.g(1.0f); }
