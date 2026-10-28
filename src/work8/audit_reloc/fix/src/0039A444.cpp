typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_39A444 { char pad10[0x10]; char m; };
 void func_006686AC(void*, int);
void f_39A444(S_39A444* p) { func_006686AC(&p->m, 1); }
