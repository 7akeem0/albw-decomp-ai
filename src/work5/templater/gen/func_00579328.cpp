typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_579328 { char pad160[0x160]; u8 m; };
bool f_579328(S_579328* p) { return p->m != 0; }
