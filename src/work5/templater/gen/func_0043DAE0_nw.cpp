typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_43DAE0 { char pad98[0x98]; char m; };
 void callee_43DAE0(void*);
void f_43DAE0(S_43DAE0* p) { callee_43DAE0(&p->m); }
