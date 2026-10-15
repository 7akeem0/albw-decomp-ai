typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_43C3F4 { void g(); };
struct S_43C3F4 { char pad154[0x154]; T_43C3F4* m; };
void f_43C3F4(S_43C3F4* p) { if (p->m) p->m->g(); }
