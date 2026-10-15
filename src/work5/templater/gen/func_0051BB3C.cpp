typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51BB3C { void g(); };
struct S_51BB3C { char pad104[0x104]; T_51BB3C* m; };
void f_51BB3C(S_51BB3C* p) { if (p->m) p->m->g(); }
