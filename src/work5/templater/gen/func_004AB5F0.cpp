typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4AB5F0;
struct S1_4AB5F0;
struct S1_4AB5F0 { void g(); };
struct S0_4AB5F0 { char pad10[0x10]; S1_4AB5F0* m10; };
void f_4AB5F0(S0_4AB5F0* p) { p->m10->g(); }
