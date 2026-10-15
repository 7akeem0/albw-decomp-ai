typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4700AC { char pad74[0x74]; char m; };
 void callee_4700AC(void*, int);
void f_4700AC(S_4700AC* p) { callee_4700AC(&p->m, 1); }
