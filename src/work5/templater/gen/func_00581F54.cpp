typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_581F54 { void g(); };
struct S_581F54 { char pad38[0x38]; T_581F54* m; };
void f_581F54(S_581F54* p) { if (p->m) p->m->g(); }
