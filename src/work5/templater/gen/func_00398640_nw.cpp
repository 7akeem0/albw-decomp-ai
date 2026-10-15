typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_398640 { char pad10[0x10]; char m; };
 void callee_398640(void*, int);
void f_398640(S_398640* p) { callee_398640(&p->m, 0); }
