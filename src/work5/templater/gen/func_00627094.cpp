typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_627094;
struct S0_627094 { char pad99C[0x99C]; u8 m99C; void next(); };
void f_627094(S0_627094* p) { p->m99C = 0x0; p->next(); }
