typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49BD40;
struct S0_49BD40 { char pad8C[0x8C]; u8 m8C; void next(); };
void f_49BD40(S0_49BD40* p) { p->m8C = 0x1; p->next(); }
