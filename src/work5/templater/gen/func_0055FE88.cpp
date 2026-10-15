typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_55FE88;
struct S0_55FE88 { char pad28[0x28]; u32 m28; };
u32 f_55FE88(S0_55FE88* p) { return p->m28; }
