typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_519D38 { void g(); };
struct S_519D38 { char padE4[0xE4]; T_519D38* m; };
void f_519D38(S_519D38* p) { if (p->m) p->m->g(); }
