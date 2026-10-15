typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EDB1C;
struct S1_4EDB1C;
struct S1_4EDB1C { char pad6C[0x6C]; u16 m6C; };
struct S0_4EDB1C { char pad10[0x10]; S1_4EDB1C* m10; };
void f_4EDB1C(S0_4EDB1C* p, u16 v) { p->m10->m6C = v; }
