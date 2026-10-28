typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_32C6D0 { char padBA8[0xBA8]; char m; };
 void func_00665670(void*, int);
void f_32C6D0(S_32C6D0* p) { func_00665670(&p->m, 20); }
