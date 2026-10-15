typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51BC50 { void g(); };
struct S_51BC50 { char pad80[0x80]; T_51BC50* m; };
void f_51BC50(S_51BC50* p) { if (p->m) p->m->g(); }
