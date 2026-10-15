typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_29A8EC;
struct S1_29A8EC;
struct S1_29A8EC { void g(int); };
struct S0_29A8EC { char pad43C[0x43C]; S1_29A8EC* m43C; };
void f_29A8EC(S0_29A8EC* p) { p->m43C->g(0); }
