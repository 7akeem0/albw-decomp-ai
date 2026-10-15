typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51BD54 { void g(); };
struct S_51BD54 { char pad70[0x70]; T_51BD54* m; };
void f_51BD54(S_51BD54* p) { if (p->m) p->m->g(); }
