typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C218 { void g(); };
struct S_51C218 { char padB0[0xB0]; T_51C218* m; };
void f_51C218(S_51C218* p) { if (p->m) p->m->g(); }
