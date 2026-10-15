typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_58DC10 { void g(); };
struct S_58DC10 { char pad80[0x80]; T_58DC10* m; };
void f_58DC10(S_58DC10* p) { if (p->m) p->m->g(); }
