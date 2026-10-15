typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3614BC;
struct S1_3614BC;
struct M_3614BC;
struct M_3614BC { void g(); };
struct S1_3614BC { char pad40C[0x40C]; M_3614BC m40C; };
struct S0_3614BC { char pad10[0x10]; S1_3614BC* m10; };
void f_3614BC(S0_3614BC* p) { p->m10->m40C.g(); }
