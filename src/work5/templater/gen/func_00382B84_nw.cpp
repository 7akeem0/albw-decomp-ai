typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_382B84 { char pad10[0x10]; char m; };
 void callee_382B84(void*, int);
void f_382B84(S_382B84* p) { callee_382B84(&p->m, 0); }
