typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_398E54 { char pad10[0x10]; char m; };
 void callee_398E54(void*, int);
void f_398E54(S_398E54* p) { callee_398E54(&p->m, 1); }
