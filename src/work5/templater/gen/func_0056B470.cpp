typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56B470 { char pad24[0x24]; s32 m; };
char* f_56B470(S_56B470* p) { return (char*)p + p->m; }
