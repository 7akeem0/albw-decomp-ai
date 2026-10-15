typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_28C814;
struct S1_28C814;
struct S1_28C814 { void g(); };
struct S0_28C814 { char pad600[0x600]; S1_28C814* m600; };
void f_28C814(S0_28C814* p) { p->m600->g(); }
