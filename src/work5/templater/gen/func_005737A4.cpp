typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_5737A4 { char pad9C[0x9C]; u8 m; };
bool f_5737A4(S_5737A4* p) { return p->m == 4; }
