typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_480484 { char pad78[0x78]; char m; };
 void callee_480484(void*, int);
void f_480484(S_480484* p) { callee_480484(&p->m, 1); }
