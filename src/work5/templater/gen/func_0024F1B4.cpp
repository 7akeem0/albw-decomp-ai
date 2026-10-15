typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_24F1B4 { char pad2D7[0x2D7]; u8 m; void g(); };
void f_24F1B4(S_24F1B4* p) { p->g(); p->m = 1; }
