typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3AF6C0 { char pad10[0x10]; char m; };
 void func_00669354(void*, int);
void f_3AF6C0(S_3AF6C0* p) { func_00669354(&p->m, 0); }
