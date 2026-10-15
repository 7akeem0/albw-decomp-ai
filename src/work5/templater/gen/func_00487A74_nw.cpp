typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_487A74 { char padE4[0xE4]; char m; };
 void callee_487A74(void*, int);
void f_487A74(S_487A74* p) { callee_487A74(&p->m, 5); }
