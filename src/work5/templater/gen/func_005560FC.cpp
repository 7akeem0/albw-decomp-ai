typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5560FC;
struct S0_5560FC { char pad1C[0x1C]; u32 m1C; };
u32 f_5560FC(S0_5560FC* p) { return p->m1C; }
