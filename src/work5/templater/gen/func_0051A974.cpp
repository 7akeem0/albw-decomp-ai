typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51A974 { void g(); };
struct S_51A974 { char pad124[0x124]; T_51A974* m; };
void f_51A974(S_51A974* p) { if (p->m) p->m->g(); }
