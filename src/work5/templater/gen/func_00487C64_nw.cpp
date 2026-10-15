typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_487C64 { char padE4[0xE4]; char m; };
 void callee_487C64(void*, int);
void f_487C64(S_487C64* p) { callee_487C64(&p->m, 2); }
