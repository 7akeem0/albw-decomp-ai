typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_570488 { char pad70[0x70]; s8 m; };
bool f_570488(S_570488* p, int a) { return p->m == a; }
