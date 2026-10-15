typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_43C408 { char pad98[0x98]; char m; };
 void callee_43C408(void*);
void f_43C408(S_43C408* p) { callee_43C408(&p->m); }
