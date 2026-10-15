typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B8B0 { void g(); };
struct S_51B8B0 { char padB0[0xB0]; T_51B8B0* m; };
void f_51B8B0(S_51B8B0* p) { if (p->m) p->m->g(); }
