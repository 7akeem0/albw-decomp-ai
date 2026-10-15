typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51AC2C { void g(); };
struct S_51AC2C { char pad80[0x80]; T_51AC2C* m; };
void f_51AC2C(S_51AC2C* p) { if (p->m) p->m->g(); }
