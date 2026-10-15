typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_5391EC { void g(); };
struct S_5391EC { char pad10[0x10]; T_5391EC* m; };
void f_5391EC(S_5391EC* p) { if (p->m) p->m->g(); }
