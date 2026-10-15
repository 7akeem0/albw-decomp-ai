typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_214C50 { char pad8BC[0x8BC]; char m; };
 void callee_214C50(void*, int);
void f_214C50(S_214C50* p) { callee_214C50(&p->m, 6); }
