typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53ED30;
struct S1_53ED30;
struct S2_53ED30;
struct S2_53ED30 { void g(); };
struct S1_53ED30 { char pad600[0x600]; S2_53ED30* m600; };
struct S0_53ED30 { char pad10[0x10]; S1_53ED30* m10; };
void f_53ED30(S0_53ED30* p) { p->m10->m600->g(); }
