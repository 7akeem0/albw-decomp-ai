typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_2DFCEC { void g(); };
struct S_2DFCEC { char pad20[0x20]; T_2DFCEC* m; };
void f_2DFCEC(S_2DFCEC* p) { if (p->m) p->m->g(); }
