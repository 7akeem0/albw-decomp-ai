typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_110DDC { void g(); };
struct S_110DDC { T_110DDC* m; };
void f_110DDC(S_110DDC* p) { if (p->m) p->m->g(); }
