typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_52F68C { char pad494[0x494]; u8 m; };
int f_52F68C(S_52F68C* p) { return p->m != 0 ? 0 : 2; }
