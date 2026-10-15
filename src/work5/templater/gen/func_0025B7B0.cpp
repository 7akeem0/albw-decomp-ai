typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_25B7B0 { void g(); };
struct S_25B7B0 { char pad10[0x10]; T_25B7B0* m; };
void f_25B7B0(S_25B7B0* p) { if (p->m) p->m->g(); }
