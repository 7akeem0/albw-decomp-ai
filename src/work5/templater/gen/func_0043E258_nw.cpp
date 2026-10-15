typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_43E258 { char pad98[0x98]; char m; };
 void callee_43E258(void*);
void f_43E258(S_43E258* p) { callee_43E258(&p->m); }
