typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern void func_0066B94C(void*,u32) ;
struct S0_512F80;
struct S0_512F80 { char pad48C[0x48C]; u32 m48C; u8 m490; };
void f_00512F80(S0_512F80*p){if(p->m490!=1)return;func_0066B94C(&p->m48C,2);}
