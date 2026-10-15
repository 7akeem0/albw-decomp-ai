typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51C32C { void g(); };
struct S_51C32C { char pad120[0x120]; T_51C32C* m; };
void f_51C32C(S_51C32C* p) { if (p->m) p->m->g(); }
