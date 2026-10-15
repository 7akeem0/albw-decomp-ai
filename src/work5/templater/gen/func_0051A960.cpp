typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51A960 { void g(); };
struct S_51A960 { char padD8[0xD8]; T_51A960* m; };
void f_51A960(S_51A960* p) { if (p->m) p->m->g(); }
