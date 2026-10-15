typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_14D630 { void g(); };
struct S_14D630 { char pad2C[0x2C]; T_14D630* m; };
void f_14D630(S_14D630* p) { if (p->m) p->m->g(); }
