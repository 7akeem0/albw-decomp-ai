typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C3B4 { void g(); };
struct S_51C3B4 { char pad11C[0x11C]; T_51C3B4* m; };
void f_51C3B4(S_51C3B4* p) { if (p->m) p->m->g(); }
