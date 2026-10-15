typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51AD24 { void g(); };
struct S_51AD24 { char pad80[0x80]; T_51AD24* m; };
void f_51AD24(S_51AD24* p) { if (p->m) p->m->g(); }
