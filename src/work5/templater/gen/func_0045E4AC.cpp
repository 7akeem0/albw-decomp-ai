typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_45E4AC;
struct S1_45E4AC;
struct S1_45E4AC { void g(); };
struct S0_45E4AC { char pad1C[0x1C]; S1_45E4AC* m1C; };
void f_45E4AC(S0_45E4AC* p) { p->m1C->g(); }
