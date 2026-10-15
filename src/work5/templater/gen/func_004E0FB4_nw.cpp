typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4E0FB4 { char pad4D4[0x4D4]; char m; };
 void callee_4E0FB4(void*, int);
void f_4E0FB4(S_4E0FB4* p) { callee_4E0FB4(&p->m, 5); }
