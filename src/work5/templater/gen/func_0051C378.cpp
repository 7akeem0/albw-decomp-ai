typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C378 { void g(); };
struct S_51C378 { char pad11C[0x11C]; T_51C378* m; };
void f_51C378(S_51C378* p) { if (p->m) p->m->g(); }
