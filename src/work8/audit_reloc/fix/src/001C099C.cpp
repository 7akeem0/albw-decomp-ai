typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1C099C { char pad40C[0x40C]; char m; };
 void func_0065B7AC(void*, int);
void f_1C099C(S_1C099C* p) { func_0065B7AC(&p->m, 3); }
