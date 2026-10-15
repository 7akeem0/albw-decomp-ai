typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51ABB4 { void g(); };
struct S_51ABB4 { char pad80[0x80]; T_51ABB4* m; };
void f_51ABB4(S_51ABB4* p) { if (p->m) p->m->g(); }
