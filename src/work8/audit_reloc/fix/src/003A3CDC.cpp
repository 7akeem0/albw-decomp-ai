typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3A3CDC { char pad10[0x10]; char m; };
 void func_00668BBC(void*, int);
void f_3A3CDC(S_3A3CDC* p) { func_00668BBC(&p->m, 1); }
