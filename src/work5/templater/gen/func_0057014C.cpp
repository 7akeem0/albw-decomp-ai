typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_57014C { char pad3C[0x3C]; u8 m; };
bool f_57014C(S_57014C* p) { return p->m == 5; }
