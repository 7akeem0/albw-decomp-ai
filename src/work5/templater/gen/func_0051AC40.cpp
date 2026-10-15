typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51AC40 { void g(); };
struct S_51AC40 { char padB0[0xB0]; T_51AC40* m; };
void f_51AC40(S_51AC40* p) { if (p->m) p->m->g(); }
