typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B888 { void g(); };
struct S_51B888 { char pad110[0x110]; T_51B888* m; };
void f_51B888(S_51B888* p) { if (p->m) p->m->g(); }
