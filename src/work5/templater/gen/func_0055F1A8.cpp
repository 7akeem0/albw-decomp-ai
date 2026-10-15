typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_55F1A8 { char pad1E9[0x1E9]; u8 m; };
bool f_55F1A8(S_55F1A8* p) { return p->m == 2; }
