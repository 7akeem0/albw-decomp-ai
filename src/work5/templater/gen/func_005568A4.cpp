typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5568A4;
struct S1_5568A4;
struct S1_5568A4 { char pad599[0x599]; u8 m599; };
struct S0_5568A4 { char pad10[0x10]; S1_5568A4* m10; };
u8 f_5568A4(S0_5568A4* p) { return p->m10->m599; }
