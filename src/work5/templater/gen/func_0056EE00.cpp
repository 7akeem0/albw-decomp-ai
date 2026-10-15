typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56EE00 { char pad4[0x4]; s32 m; };
char* f_56EE00(S_56EE00* p) { return (char*)p + p->m; }
