typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_550428 { char pad2F4[0x2F4]; u8 m; };
bool f_550428(S_550428* p) { return p->m == 6; }
