typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57DCB4;
struct S0_57DCB4 { char pad10[0x10]; u8 m10; };
u8 f_57DCB4(S0_57DCB4* p) { return p->m10; }
