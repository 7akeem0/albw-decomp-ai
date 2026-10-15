typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4EA104 { void g(); };
struct S_4EA104 { char pad58[0x58]; T_4EA104* m; };
void f_4EA104(S_4EA104* p) { if (p->m) p->m->g(); }
