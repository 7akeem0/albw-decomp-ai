typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3BB35C { char pad10[0x10]; char m; };
 void callee_3BB35C(void*, int);
void f_3BB35C(S_3BB35C* p) { callee_3BB35C(&p->m, 0); }
