typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4C6C50 { void g(); };
struct S_4C6C50 { char pad51C[0x51C]; T_4C6C50* m; };
void f_4C6C50(S_4C6C50* p) { if (p->m) p->m->g(); }
