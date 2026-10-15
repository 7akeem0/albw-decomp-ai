typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5706B0;
struct S1_5706B0;
struct S1_5706B0 { char pad38[0x38]; f32 m38; };
struct S0_5706B0 { char pad5C[0x5C]; S1_5706B0* m5C; };
f32 f_5706B0(S0_5706B0* p) { return p->m5C->m38; }
