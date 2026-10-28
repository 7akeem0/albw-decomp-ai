typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_56A138 { char padB4[0xB4]; char m; };
 void func_00111EA8(void*);
void f_56A138(S_56A138* p) { func_00111EA8(&p->m); }
