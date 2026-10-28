typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_382EC8 { char pad10[0x10]; char m; };
 void func_00667A04(void*, int);
void f_382EC8(S_382EC8* p) { func_00667A04(&p->m, 1); }
