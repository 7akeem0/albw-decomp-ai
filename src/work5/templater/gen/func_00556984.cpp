typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556984;
struct S1_556984;
struct S1_556984 { char pad431[0x431]; u8 m431; };
struct S0_556984 { char pad10[0x10]; S1_556984* m10; };
u8 f_556984(S0_556984* p) { return p->m10->m431; }
