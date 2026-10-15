typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_23DF18 { char pad788[0x788]; char m; };
 void callee_23DF18(void*, int);
void f_23DF18(S_23DF18* p) { callee_23DF18(&p->m, 2); }
