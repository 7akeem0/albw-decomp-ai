typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_452CA0 { char pad74[0x74]; char m; };
 void callee_452CA0(void*, int);
void f_452CA0(S_452CA0* p) { callee_452CA0(&p->m, 5); }
