typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2DEFCC;
struct S1_2DEFCC;
struct S1_2DEFCC { void g(int); };
struct S0_2DEFCC { char pad3C[0x3C]; S1_2DEFCC* m3C; };
void f_2DEFCC(S0_2DEFCC* p) { p->m3C->g(30); }
