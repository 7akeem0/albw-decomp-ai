typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3AFCC4 { char pad1C[0x1C]; char m; };
 void callee_3AFCC4(void*, int);
void f_3AFCC4(S_3AFCC4* p) { callee_3AFCC4(&p->m, 0); }
