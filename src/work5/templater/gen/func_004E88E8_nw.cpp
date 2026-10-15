typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4E88E8 { char pad4DC[0x4DC]; char m; };
 void callee_4E88E8(void*, int);
void f_4E88E8(S_4E88E8* p) { callee_4E88E8(&p->m, 5); }
