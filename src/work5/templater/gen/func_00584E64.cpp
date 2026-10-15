typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_584E64;
struct S1_584E64;
struct S1_584E64 { s8 m0; };
struct S0_584E64 { char pad150[0x150]; S1_584E64* m150; };
s8 f_584E64(S0_584E64* p) { return p->m150->m0; }
