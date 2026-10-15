typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E380 { void g(); };
struct S_29E380 { char pad20[0x20]; T_29E380* m; };
void f_29E380(S_29E380* p) { if (p->m) p->m->g(); }
