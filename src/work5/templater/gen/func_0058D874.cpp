typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_58D874 { void g(); };
struct S_58D874 { char pad80[0x80]; T_58D874* m; };
void f_58D874(S_58D874* p) { if (p->m) p->m->g(); }
