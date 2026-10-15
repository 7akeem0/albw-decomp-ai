typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556B70;
struct S1_556B70;
struct S1_556B70 { char pad59A[0x59A]; u8 m59A; };
struct S0_556B70 { char pad10[0x10]; S1_556B70* m10; };
u8 f_556B70(S0_556B70* p) { return p->m10->m59A; }
