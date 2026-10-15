typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_58DC40 { void g(); };
struct S_58DC40 { char padDC[0xDC]; T_58DC40* m; };
void f_58DC40(S_58DC40* p) { if (p->m) p->m->g(); }
