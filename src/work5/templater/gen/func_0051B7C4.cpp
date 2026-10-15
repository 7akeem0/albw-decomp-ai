typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B7C4 { void g(); };
struct S_51B7C4 { char padE4[0xE4]; T_51B7C4* m; };
void f_51B7C4(S_51B7C4* p) { if (p->m) p->m->g(); }
