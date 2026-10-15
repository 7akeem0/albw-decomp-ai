typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B6D0 { void g(); };
struct S_51B6D0 { char padDC[0xDC]; T_51B6D0* m; };
void f_51B6D0(S_51B6D0* p) { if (p->m) p->m->g(); }
