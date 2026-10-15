typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3E0DC0;
struct S0_3E0DC0 { char pad6C[0x6C]; u16 m6C; void next(); };
void f_3E0DC0(S0_3E0DC0* p) { p->m6C = 0xffff; p->next(); }
