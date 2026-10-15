typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_424FAC { void g(f32); };
struct S_424FAC { char pad48[0x48]; M_424FAC m; };
void f_424FAC(S_424FAC* p) { p->m.g(1.0f); }
