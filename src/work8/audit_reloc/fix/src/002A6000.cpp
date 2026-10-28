typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2A6000 { char pad9E0[0x9E0]; char m; };
 void func_00662128(void*, int);
void f_2A6000(S_2A6000* p) { func_00662128(&p->m, 18); }
