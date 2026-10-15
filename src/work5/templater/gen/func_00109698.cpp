typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_109698 { void g(); };
struct S_109698 { char pad3C[0x3C]; T_109698* m; };
void f_109698(S_109698* p) { if (p->m) p->m->g(); }
