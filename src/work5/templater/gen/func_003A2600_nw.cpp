typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3A2600 { char pad10[0x10]; char m; };
 void callee_3A2600(void*, int);
void f_3A2600(S_3A2600* p) { callee_3A2600(&p->m, 0); }
