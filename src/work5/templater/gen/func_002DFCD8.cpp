typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_2DFCD8 { void g(); };
struct S_2DFCD8 { char pad20[0x20]; T_2DFCD8* m; };
void f_2DFCD8(S_2DFCD8* p) { if (p->m) p->m->g(); }
