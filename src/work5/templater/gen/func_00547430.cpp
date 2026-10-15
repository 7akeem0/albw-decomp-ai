typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_547430;
struct S1_547430;
struct S1_547430 { char pad214[0x214]; u32 m214; };
struct S0_547430 { char pad24[0x24]; S1_547430* m24; };
u32 f_547430(S0_547430* p) { return p->m24->m214; }
