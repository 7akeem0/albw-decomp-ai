typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_2472B0 { char pad410[0x410]; char m; };
 void callee_2472B0(void*, int);
void f_2472B0(S_2472B0* p) { callee_2472B0(&p->m, 1); }
