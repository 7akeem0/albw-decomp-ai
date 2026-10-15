typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_537B38;
struct S1_537B38;
struct M_537B38;
struct M_537B38 { void g(); };
struct S1_537B38 { char pad40C[0x40C]; M_537B38 m40C; };
struct S0_537B38 { char pad10[0x10]; S1_537B38* m10; };
void f_537B38(S0_537B38* p) { p->m10->m40C.g(); }
