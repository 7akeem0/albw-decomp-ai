typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2EDDB0 { char padB98[0xB98]; f32 m; };
f32 func_004F898C();
void f_2EDDB0(S_2EDDB0* p) { p->m = func_004F898C(); }
