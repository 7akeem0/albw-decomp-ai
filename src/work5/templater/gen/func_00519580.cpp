typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_519580 { void g(); };
struct S_519580 { char pad80[0x80]; T_519580* m; };
void f_519580(S_519580* p) { if (p->m) p->m->g(); }
