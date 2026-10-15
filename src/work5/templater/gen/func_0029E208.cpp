typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_29E208 { void g(); };
struct S_29E208 { char pad18[0x18]; T_29E208* m; };
void f_29E208(S_29E208* p) { if (p->m) p->m->g(); }
