typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B784 { void g(); };
struct S_51B784 { char pad80[0x80]; T_51B784* m; };
void f_51B784(S_51B784* p) { if (p->m) p->m->g(); }
