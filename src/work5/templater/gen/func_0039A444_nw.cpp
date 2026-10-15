typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_39A444 { char pad10[0x10]; char m; };
 void callee_39A444(void*, int);
void f_39A444(S_39A444* p) { callee_39A444(&p->m, 1); }
