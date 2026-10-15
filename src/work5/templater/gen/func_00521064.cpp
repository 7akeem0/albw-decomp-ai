typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_521064 { char pad39C[0x39C]; u32 m; };
bool f_521064(S_521064* p) { return (p->m & 0x7) != 0; }
