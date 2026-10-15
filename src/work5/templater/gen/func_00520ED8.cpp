typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_520ED8;
struct S0_520ED8 { char pad38D[0x38D]; s8 m38D; };
s8 f_520ED8(S0_520ED8* p) { return p->m38D; }
