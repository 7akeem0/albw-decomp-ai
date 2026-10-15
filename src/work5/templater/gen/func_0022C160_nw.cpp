typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_22C160 { char pad8FC[0x8FC]; char m; };
 void callee_22C160(void*, int);
void f_22C160(S_22C160* p) { callee_22C160(&p->m, 20); }
