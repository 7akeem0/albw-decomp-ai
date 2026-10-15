typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_453A1C { char padA4[0xA4]; u32 m; void g(); };
void f_453A1C(S_453A1C* p) { p->g(); p->m = 6; }
