typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_55AF6C;
struct S0_55AF6C { char pad2A[0x2A]; u16 m2A; };
u16 f_55AF6C(S0_55AF6C* p) { return p->m2A; }
