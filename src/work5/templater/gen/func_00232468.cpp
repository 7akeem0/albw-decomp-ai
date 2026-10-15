typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_232468 { char pad18[0x18]; u32 m; };
void f_232468(S_232468* p) { p->m = (p->m & ~0x4); }
