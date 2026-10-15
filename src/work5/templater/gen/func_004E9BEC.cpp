typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4E9BEC { void g(); };
struct S_4E9BEC { char pad58[0x58]; T_4E9BEC* m; };
void f_4E9BEC(S_4E9BEC* p) { if (p->m) p->m->g(); }
