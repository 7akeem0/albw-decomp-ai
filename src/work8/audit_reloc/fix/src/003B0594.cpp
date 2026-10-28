typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_3B0594 { char pad1C[0x1C]; char m; };
 void func_00669498(void*, int);
void f_3B0594(S_3B0594* p) { func_00669498(&p->m, 1); }
