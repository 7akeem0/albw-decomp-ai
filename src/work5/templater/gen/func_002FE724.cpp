typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2FE724;
struct S1_2FE724;
struct S1_2FE724 { void g(); };
struct S0_2FE724 { char pad1EC[0x1EC]; S1_2FE724* m1EC; };
void f_2FE724(S0_2FE724* p) { p->m1EC->g(); }
