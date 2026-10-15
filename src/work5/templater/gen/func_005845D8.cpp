typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_5845D8 { void g(); };
struct S_5845D8 { char pad5B0[0x5B0]; T_5845D8* m; };
void f_5845D8(S_5845D8* p) { if (p->m) p->m->g(); }
