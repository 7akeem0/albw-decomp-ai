typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_39F0F0;
struct S1_39F0F0;
struct S1_39F0F0 { void g(int, int); };
struct S0_39F0F0 { char pad4[0x4]; S1_39F0F0* m4; };
void f_39F0F0(S0_39F0F0* p) { p->m4->g(0, 1); }
