typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_32B9E0 { char padC60[0xC60]; u32 b; char padC93[0x2F]; u8 a; };
void f_32B9E0(S_32B9E0* p) { p->a = 1; p->b = 60; }
