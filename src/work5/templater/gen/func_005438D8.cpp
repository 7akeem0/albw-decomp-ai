typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_5438D8 { void g(); };
struct S_5438D8 { char pad4[0x4]; T_5438D8* m; };
void f_5438D8(S_5438D8* p) { if (p->m) p->m->g(); }
