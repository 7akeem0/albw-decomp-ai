typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_48BD10 { void g(); };
struct S_48BD10 { T_48BD10* m; };
void f_48BD10(S_48BD10* p) { if (p->m) p->m->g(); }
