typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_25B680 { void g(); };
struct S_25B680 { char pad10[0x10]; T_25B680* m; };
void f_25B680(S_25B680* p) { if (p->m) p->m->g(); }
