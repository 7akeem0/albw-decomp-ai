typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_22A0BC { char pad8FC[0x8FC]; char m; };
 void callee_22A0BC(void*, int);
void f_22A0BC(S_22A0BC* p) { callee_22A0BC(&p->m, 17); }
