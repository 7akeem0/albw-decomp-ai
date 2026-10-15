typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2F155C { char padB98[0xB98]; f32 m; };
f32 g_2F155C();
void f_2F155C(S_2F155C* p) { p->m = g_2F155C(); }
