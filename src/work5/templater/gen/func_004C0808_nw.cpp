typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
 void callee_4C0808(void*, int, int, int, int);
void f_4C0808(void* p, int a, int b, int c) { callee_4C0808(p, a, b, c, 0); }
