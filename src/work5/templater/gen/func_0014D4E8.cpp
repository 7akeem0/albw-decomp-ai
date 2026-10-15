typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_14D4E8 { void g(); };
struct S_14D4E8 { char pad14[0x14]; T_14D4E8* m; };
void f_14D4E8(S_14D4E8* p) { if (p->m) p->m->g(); }
