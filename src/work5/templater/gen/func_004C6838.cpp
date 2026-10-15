typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4C6838 { void g(); };
struct S_4C6838 { char pad5B0[0x5B0]; T_4C6838* m; };
void f_4C6838(S_4C6838* p) { if (p->m) p->m->g(); }
