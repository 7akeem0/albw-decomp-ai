typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1B083C { char pad90C[0x90C]; char m; };
 void callee_1B083C(void*, int);
void f_1B083C(S_1B083C* p) { callee_1B083C(&p->m, 9); }
