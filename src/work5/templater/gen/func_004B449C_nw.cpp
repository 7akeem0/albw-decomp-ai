typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
 void callee_4B449C(void*, int, int, int, int);
void f_4B449C(void* p, int a, int b, int c) { callee_4B449C(p, a, b, c, 0); }
