typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B1F8 { void g(); };
struct S_51B1F8 { char pad80[0x80]; T_51B1F8* m; };
void f_51B1F8(S_51B1F8* p) { if (p->m) p->m->g(); }
