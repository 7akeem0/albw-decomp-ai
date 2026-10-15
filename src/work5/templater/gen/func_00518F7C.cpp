typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_518F7C { void g(); };
struct S_518F7C { char padD8[0xD8]; T_518F7C* m; };
void f_518F7C(S_518F7C* p) { if (p->m) p->m->g(); }
