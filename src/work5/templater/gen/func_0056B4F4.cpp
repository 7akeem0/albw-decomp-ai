typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56B4F4 { char pad14[0x14]; s32 m; };
char* f_56B4F4(S_56B4F4* p) { return (char*)p + p->m; }
