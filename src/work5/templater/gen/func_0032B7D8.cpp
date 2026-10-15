typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_32B7D8;
struct S0_32B7D8 { char padC93[0xC93]; u8 mC93; };
void f_32B7D8(S0_32B7D8* p) { p->mC93 = 0x1; }
