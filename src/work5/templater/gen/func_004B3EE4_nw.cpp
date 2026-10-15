typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
 void callee_4B3EE4(void*, int, int, int, int);
void f_4B3EE4(void* p, int a, int b, int c) { callee_4B3EE4(p, a, b, c, 1); }
