typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3583A0 { char pad8BC[0x8BC]; char m; };
 void callee_3583A0(void*, int);
void f_3583A0(S_3583A0* p) { callee_3583A0(&p->m, 3); }
