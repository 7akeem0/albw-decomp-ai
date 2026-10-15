typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_255C84;
struct S1_255C84;
struct M_255C84;
struct M_255C84 { void g(); };
struct S1_255C84 { char pad40C[0x40C]; M_255C84 m40C; };
struct S0_255C84 { char pad10[0x10]; S1_255C84* m10; };
void f_255C84(S0_255C84* p) { p->m10->m40C.g(); }
