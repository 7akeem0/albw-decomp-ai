typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_234D98 { char pad550[0x550]; char m; };
 void callee_234D98(void*, int);
void f_234D98(S_234D98* p) { callee_234D98(&p->m, 1); }
