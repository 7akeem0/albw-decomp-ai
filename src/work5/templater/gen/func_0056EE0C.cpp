typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56EE0C { char padC[0xC]; s32 m; };
char* f_56EE0C(S_56EE0C* p) { return (char*)p + p->m; }
