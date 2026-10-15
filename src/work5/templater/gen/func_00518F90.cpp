typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_518F90 { void g(); };
struct S_518F90 { char pad128[0x128]; T_518F90* m; };
void f_518F90(S_518F90* p) { if (p->m) p->m->g(); }
