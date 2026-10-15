typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3196A8 { char pad4A0[0x4A0]; u8 m; };
bool f_3196A8(S_3196A8* p) { return p->m != 1; }
