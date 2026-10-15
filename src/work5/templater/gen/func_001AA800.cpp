typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1AA800;
struct S0_1AA800 { void g(int, int, int); };
void f_1AA800(S0_1AA800* p) { p->g(1, -1, 0); }
