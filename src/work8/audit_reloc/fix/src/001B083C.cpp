typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1B083C { char pad90C[0x90C]; char m; };
 void func_0065AF54(void*, int);
void f_1B083C(S_1B083C* p) { func_0065AF54(&p->m, 9); }
