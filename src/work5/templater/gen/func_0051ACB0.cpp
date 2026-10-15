typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51ACB0 { void g(); };
struct S_51ACB0 { char pad20[0x20]; T_51ACB0* m; };
void f_51ACB0(S_51ACB0* p) { if (p->m) p->m->g(); }
