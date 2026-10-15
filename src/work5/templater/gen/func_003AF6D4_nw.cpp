typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3AF6D4 { char pad10[0x10]; char m; };
 void callee_3AF6D4(void*, int);
void f_3AF6D4(S_3AF6D4* p) { callee_3AF6D4(&p->m, 1); }
