typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern void func_0066F684(void*,u32) ;
struct S0_4A4744;
struct S0_4A4744 { char pad20[0x20]; u32 m20; u8 m24; };
void f_004A4744(S0_4A4744*p){if(p->m24)return;func_0066F684(&p->m20,1);}
