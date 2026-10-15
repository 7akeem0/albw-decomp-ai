typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_25B74C { void g(); };
struct S_25B74C { char pad10[0x10]; T_25B74C* m; };
void f_25B74C(S_25B74C* p) { if (p->m) p->m->g(); }
