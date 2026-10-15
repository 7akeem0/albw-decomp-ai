typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4BFC10 { char pad858[0x858]; u8 m; };
bool f_4BFC10(S_4BFC10* p) { return p->m == 2; }
