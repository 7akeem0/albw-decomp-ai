typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_32B6CC;
struct S0_32B6CC { char padC60[0xC60]; u32 mC60; };
void f_32B6CC(S0_32B6CC* p) { p->mC60 = 0x5a; }
