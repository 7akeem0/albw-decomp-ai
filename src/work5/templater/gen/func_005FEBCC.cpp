typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5FEBCC;
struct S0_5FEBCC { u32 m0; void next(); };
void f_5FEBCC(S0_5FEBCC* p) { p->m0 = 0x42; p->next(); }
