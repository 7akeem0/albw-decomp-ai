typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_560900 { char pad70[0x70]; s8 m; };
bool f_560900(S_560900* p, int a) { return p->m == a; }
