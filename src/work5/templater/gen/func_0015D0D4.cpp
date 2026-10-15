typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_15D0D4;
struct S0_15D0D4 { char pad9AE[0x9AE]; u8 m9AE; void next(); };
void f_15D0D4(S0_15D0D4* p) { p->m9AE = 0x0; p->next(); }
