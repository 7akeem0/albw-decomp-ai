typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_389558 { char pad40C[0x40C]; char m; };
 void func_00667DD0(void*, int);
void f_389558(S_389558* p) { func_00667DD0(&p->m, 2); }
