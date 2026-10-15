typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_520814 { char pad4A8[0x4A8]; u32 m; };
bool f_520814(S_520814* p) { return p->m == 0; }
