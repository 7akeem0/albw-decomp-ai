typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_580850;
struct S1_580850;
struct S2_580850;
struct S2_580850 { char pad20[0x20]; u32 m20; };
struct S1_580850 { char pad20[0x20]; S2_580850* m20; };
struct S0_580850 { char pad5C[0x5C]; S1_580850* m5C; };
u32 f_580850(S0_580850* p) { return p->m5C->m20->m20; }
