typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_55FD10 { char pad70[0x70]; s8 m; };
bool f_55FD10(S_55FD10* p, int a) { return p->m == a; }
