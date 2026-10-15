typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3982B8 { char pad10[0x10]; char m; };
 void callee_3982B8(void*, int);
void f_3982B8(S_3982B8* p) { callee_3982B8(&p->m, 0); }
