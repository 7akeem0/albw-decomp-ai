typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern void func_0066B580(void*,u32) ;
struct S0_509F0C;
struct S0_509F0C { char pad418[0x418]; u32 m418; u8 m41C; };
void f_00509F0C(S0_509F0C*p){if(p->m41C!=4)return;func_0066B580(&p->m418,5);}
