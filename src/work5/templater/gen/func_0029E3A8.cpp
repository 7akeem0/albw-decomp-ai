typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E3A8 { void g(); };
struct S_29E3A8 { char pad18[0x18]; T_29E3A8* m; };
void f_29E3A8(S_29E3A8* p) { if (p->m) p->m->g(); }
