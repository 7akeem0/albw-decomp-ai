typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_588BE4;
struct S1_588BE4;
struct S1_588BE4 { char pad8[0x8]; u32 m8; };
struct S0_588BE4 { char pad2D0[0x2D0]; S1_588BE4* m2D0; };
u32 f_588BE4(S0_588BE4* p) { return p->m2D0->m8; }
