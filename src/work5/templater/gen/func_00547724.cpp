typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_547724;
struct S1_547724;
struct S1_547724 { char pad8[0x8]; u32 m8; };
struct S0_547724 { S1_547724* m0; };
u32 f_547724(S0_547724* p) { return p->m0->m8; }
