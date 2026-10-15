typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_291FCC { void g(); };
struct S_291FCC { char pad48[0x48]; T_291FCC* m; };
void f_291FCC(S_291FCC* p) { if (p->m) p->m->g(); }
