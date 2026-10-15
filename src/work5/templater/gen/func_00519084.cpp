typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_519084 { void g(); };
struct S_519084 { char pad80[0x80]; T_519084* m; };
void f_519084(S_519084* p) { if (p->m) p->m->g(); }
