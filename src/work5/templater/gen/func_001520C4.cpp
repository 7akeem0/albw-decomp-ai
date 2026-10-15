typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_1520C4;
struct S1_1520C4;
struct S1_1520C4 { void g(); };
struct S0_1520C4 { char pad514[0x514]; S1_1520C4* m514; };
void f_1520C4(S0_1520C4* p) { p->m514->g(); }
