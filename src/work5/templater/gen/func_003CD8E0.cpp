typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3CD8E0;
struct M_3CD8E0;
struct M_3CD8E0 { void g(); };
struct S0_3CD8E0 { char pad10[0x10]; M_3CD8E0 m10; };
void f_3CD8E0(S0_3CD8E0* p) { p->m10.g(); }
