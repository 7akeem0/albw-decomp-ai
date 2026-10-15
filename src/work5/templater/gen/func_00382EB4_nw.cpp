typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_382EB4 { char pad10[0x10]; char m; };
 void callee_382EB4(void*, int);
void f_382EB4(S_382EB4* p) { callee_382EB4(&p->m, 0); }
