typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_48BD2C { void g(); };
struct S_48BD2C { T_48BD2C* m; };
void f_48BD2C(S_48BD2C* p) { if (p->m) p->m->g(); }
