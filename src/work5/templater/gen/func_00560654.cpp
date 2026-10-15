typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_560654 { char pad70[0x70]; s8 m; };
bool f_560654(S_560654* p, int a) { return p->m == a; }
