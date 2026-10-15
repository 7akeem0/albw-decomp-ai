typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_4A3954 { void g(); };
struct S_4A3954 { char pad24[0x24]; T_4A3954* m; };
void f_4A3954(S_4A3954* p) { if (p->m) p->m->g(); }
