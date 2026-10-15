typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_58A4A8 { void g(); };
struct S_58A4A8 { char pad41C[0x41C]; T_58A4A8* m; };
void f_58A4A8(S_58A4A8* p) { if (p->m) p->m->g(); }
