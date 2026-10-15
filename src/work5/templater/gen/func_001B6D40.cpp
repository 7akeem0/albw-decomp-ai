typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_1B6D40 { void g(f32); };
struct S_1B6D40 { char pad2C[0x2C]; M_1B6D40 m; };
void f_1B6D40(S_1B6D40* p) { p->m.g(1.0f); }
