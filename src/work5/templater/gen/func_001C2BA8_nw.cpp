typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_1C2BA8 { char pad788[0x788]; char m; };
 void callee_1C2BA8(void*, int);
void f_1C2BA8(S_1C2BA8* p) { callee_1C2BA8(&p->m, 4); }
