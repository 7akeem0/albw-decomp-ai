typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S0_4A5614;
extern void func_00232468(S0_4A5614*);
extern void func_0066F90C(void*,u32) ;
struct S0_4A5614;
struct S0_4A5614 { char pad20[0x20]; u32 m20; };
void f_004A5614(S0_4A5614* p){func_00232468(p);func_0066F90C(&p->m20,0);}
