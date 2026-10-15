typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2C8500 { char pad478[0x478]; u8 a; char pad48C[0x13]; u32 b; };
void f_2C8500(S_2C8500* p) { p->a = 1; p->b = 0; }
