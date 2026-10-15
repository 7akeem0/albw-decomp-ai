typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51AA0C { void g(); };
struct S_51AA0C { char pad80[0x80]; T_51AA0C* m; };
void f_51AA0C(S_51AA0C* p) { if (p->m) p->m->g(); }
