typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FB3F8;
struct S0_4FB3F8 { char pad93C[0x93C]; u8 m93C; void next(); };
void f_4FB3F8(S0_4FB3F8* p) { p->m93C = 0x0; p->next(); }
