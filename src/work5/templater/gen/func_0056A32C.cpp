typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56A32C { char pad4[0x4]; s32 m; };
char* f_56A32C(S_56A32C* p) { return (char*)p + p->m; }
