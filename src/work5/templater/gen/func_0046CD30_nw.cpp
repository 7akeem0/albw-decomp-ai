typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_46CD30 { char pad74[0x74]; char m; };
 void callee_46CD30(void*, int);
void f_46CD30(S_46CD30* p) { callee_46CD30(&p->m, 1); }
