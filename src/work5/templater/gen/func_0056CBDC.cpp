typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_56CBDC;
struct S1_56CBDC;
struct S1_56CBDC { void g(); };
struct S0_56CBDC { char pad4[0x4]; S1_56CBDC* m4; };
void f_56CBDC(S0_56CBDC* p) { p->m4->g(); }
