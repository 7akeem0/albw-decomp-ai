typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_246A34 { char pad414[0x414]; char m; };
 void callee_246A34(void*, int);
void f_246A34(S_246A34* p) { callee_246A34(&p->m, 0); }
