typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51BE80 { void g(); };
struct S_51BE80 { char pad114[0x114]; T_51BE80* m; };
void f_51BE80(S_51BE80* p) { if (p->m) p->m->g(); }
