typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_38FADC;
struct S0_38FADC { char pad430[0x430]; u32 m430; };
void f_38FADC(S0_38FADC* p) { p->m430 = 0x0; }
