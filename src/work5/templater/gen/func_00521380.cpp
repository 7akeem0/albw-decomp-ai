typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_521380;
struct S1_521380;
struct S1_521380 { char padA1[0xA1]; s8 mA1; };
struct S0_521380 { char pad1C[0x1C]; S1_521380* m1C; };
s8 f_521380(S0_521380* p) { return p->m1C->mA1; }
