typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4FB370 { void g(); };
struct S_4FB370 { char pad410[0x410]; T_4FB370* m; };
void f_4FB370(S_4FB370* p) { if (p->m) p->m->g(); }
