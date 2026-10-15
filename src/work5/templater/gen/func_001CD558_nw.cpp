typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1CD558 { char pad4D4[0x4D4]; char m; };
 void callee_1CD558(void*, int);
void f_1CD558(S_1CD558* p) { callee_1CD558(&p->m, 3); }
