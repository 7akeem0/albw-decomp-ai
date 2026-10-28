typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3835D0 { char pad10[0x10]; char m; };
 void func_00667B48(void*, int);
void f_3835D0(S_3835D0* p) { func_00667B48(&p->m, 0); }
