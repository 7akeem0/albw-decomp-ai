typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C034 { void g(); };
struct S_51C034 { char pad80[0x80]; T_51C034* m; };
void f_51C034(S_51C034* p) { if (p->m) p->m->g(); }
