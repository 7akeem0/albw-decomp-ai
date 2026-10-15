typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T_51B480 { char pad19E[0x19E]; u8 m; };
struct S_51B480 { char pad80[0x80]; T_51B480* q; };
void f_51B480(S_51B480* p) { if (p->q) p->q->m = 0; }
