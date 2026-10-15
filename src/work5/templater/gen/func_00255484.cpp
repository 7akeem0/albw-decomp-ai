typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_255484;
struct S1_255484;
struct M_255484;
struct M_255484 { void g(); };
struct S1_255484 { char pad40C[0x40C]; M_255484 m40C; };
struct S0_255484 { char pad10[0x10]; S1_255484* m10; };
void f_255484(S0_255484* p) { p->m10->m40C.g(); }
