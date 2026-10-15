typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51AD10 { void g(); };
struct S_51AD10 { char pad70[0x70]; T_51AD10* m; };
void f_51AD10(S_51AD10* p) { if (p->m) p->m->g(); }
