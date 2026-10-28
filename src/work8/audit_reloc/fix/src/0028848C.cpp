typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_28848C { char pad4DC[0x4DC]; char m; };
 void func_00661480(void*, int);
void f_28848C(S_28848C* p) { func_00661480(&p->m, 4); }
