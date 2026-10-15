typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2CF084 { char pad40C[0x40C]; char m; };
 void callee_2CF084(void*, int);
void f_2CF084(S_2CF084* p) { callee_2CF084(&p->m, 3); }
