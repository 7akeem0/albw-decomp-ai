typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C38C { void g(); };
struct S_51C38C { char padB0[0xB0]; T_51C38C* m; };
void f_51C38C(S_51C38C* p) { if (p->m) p->m->g(); }
