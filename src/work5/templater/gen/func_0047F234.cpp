typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_47F234 { void g(); };
struct S_47F234 { char pad10C[0x10C]; T_47F234* m; };
void f_47F234(S_47F234* p) { if (p->m) p->m->g(); }
