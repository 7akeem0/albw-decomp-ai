typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5809EC;
struct S0_5809EC { char pad80[0x80]; u32 m80; };
u32 f_5809EC(S0_5809EC* p) { return p->m80; }
