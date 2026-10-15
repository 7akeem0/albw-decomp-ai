typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_22787C { char pad468[0x468]; char m; };
 void callee_22787C(void*, int);
void f_22787C(S_22787C* p) { callee_22787C(&p->m, 17); }
