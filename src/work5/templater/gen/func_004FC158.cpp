typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FC158;
struct S0_4FC158 { char pad93C[0x93C]; u8 m93C; void next(); };
void f_4FC158(S0_4FC158* p) { p->m93C = 0x1; p->next(); }
