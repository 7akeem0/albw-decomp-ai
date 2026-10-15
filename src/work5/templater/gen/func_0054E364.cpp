typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_54E364;
struct S0_54E364 { char pad4CC[0x4CC]; s8 m4CC; };
s8 f_54E364(S0_54E364* p) { return p->m4CC; }
