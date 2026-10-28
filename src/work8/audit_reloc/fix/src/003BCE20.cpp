typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3BCE20 { char pad10[0x10]; char m; };
 void func_006699A8(void*, int);
void f_3BCE20(S_3BCE20* p) { func_006699A8(&p->m, 0); }
