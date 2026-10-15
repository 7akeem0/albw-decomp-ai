typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56B47C { char pad2C[0x2C]; s32 m; };
char* f_56B47C(S_56B47C* p) { return (char*)p + p->m; }
