typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_56D488 { void g(); };
struct S_56D488 { T_56D488* m; };
void f_56D488(S_56D488* p) { if (p->m) p->m->g(); }
