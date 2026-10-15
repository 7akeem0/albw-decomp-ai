typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_519098 { void g(); };
struct S_519098 { char padD8[0xD8]; T_519098* m; };
void f_519098(S_519098* p) { if (p->m) p->m->g(); }
