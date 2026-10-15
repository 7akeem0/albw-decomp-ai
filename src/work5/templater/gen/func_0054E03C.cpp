typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_54E03C;
struct S0_54E03C { char pad3D0[0x3D0]; char m3D0; };
char* f_54E03C(S0_54E03C* p) { return &p->m3D0; }
