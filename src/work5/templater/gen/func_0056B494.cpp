typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56B494 { char pad1C[0x1C]; s32 m; };
char* f_56B494(S_56B494* p) { return (char*)p + p->m; }
