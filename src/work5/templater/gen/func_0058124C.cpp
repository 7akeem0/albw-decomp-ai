typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_58124C { char pad24[0x24]; u8 m; };
bool f_58124C(S_58124C* p) { return p->m == 2; }
