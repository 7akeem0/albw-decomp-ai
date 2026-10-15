typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4FB35C { void g(); };
struct S_4FB35C { char pad418[0x418]; T_4FB35C* m; };
void f_4FB35C(S_4FB35C* p) { if (p->m) p->m->g(); }
