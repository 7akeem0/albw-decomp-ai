typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_521018 { char pad39C[0x39C]; u32 m; };
bool f_521018(S_521018* p) { return (p->m & 0x78) != 0; }
