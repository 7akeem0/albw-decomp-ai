typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556B2C;
struct S1_556B2C;
struct S1_556B2C { char pad6C0[0x6C0]; s8 m6C0; };
struct S0_556B2C { char pad10[0x10]; S1_556B2C* m10; };
s8 f_556B2C(S0_556B2C* p) { return p->m10->m6C0; }
