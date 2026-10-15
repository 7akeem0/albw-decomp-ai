typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_47009C { char pad18[0x18]; u32 m; };
void f_47009C(S_47009C* p) { p->m = (p->m | 0x80); }
