typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_16E820 { char pad2E0[0x2E0]; char m; };
 void callee_16E820(void*, int);
void f_16E820(S_16E820* p) { callee_16E820(&p->m, 0); }
