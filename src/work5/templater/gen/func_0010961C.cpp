typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_10961C { void g(); };
struct S_10961C { char pad3C[0x3C]; T_10961C* m; };
void f_10961C(S_10961C* p) { if (p->m) p->m->g(); }
