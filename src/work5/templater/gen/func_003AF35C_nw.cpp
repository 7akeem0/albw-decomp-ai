typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3AF35C { char pad10[0x10]; char m; };
 void callee_3AF35C(void*, int);
void f_3AF35C(S_3AF35C* p) { callee_3AF35C(&p->m, 0); }
