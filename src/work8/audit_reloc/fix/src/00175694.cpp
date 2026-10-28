typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_175694 { char pad40C[0x40C]; char m; };
 void func_00658D9C(void*, int);
void f_175694(S_175694* p) { func_00658D9C(&p->m, 3); }
