typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_3766D4 { void g(f32); };
struct S_3766D4 { char pad5C[0x5C]; M_3766D4 m; };
void f_3766D4(S_3766D4* p) { p->m.g(1.0f); }
