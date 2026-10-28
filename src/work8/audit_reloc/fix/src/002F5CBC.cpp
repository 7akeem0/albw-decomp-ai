typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2F5CBC { char pad8C8[0x8C8]; char m; };
 void func_006640EC(void*, int);
void f_2F5CBC(S_2F5CBC* p) { func_006640EC(&p->m, 34); }
