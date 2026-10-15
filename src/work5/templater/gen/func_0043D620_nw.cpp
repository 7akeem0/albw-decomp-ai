typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_43D620 { char pad98[0x98]; char m; };
 void callee_43D620(void*, int);
void f_43D620(S_43D620* p) { callee_43D620(&p->m, 0); }
