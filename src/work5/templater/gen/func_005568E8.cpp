typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5568E8;
struct S1_5568E8;
struct S1_5568E8 { char pad2CC[0x2CC]; u32 m2CC; };
struct S0_5568E8 { char pad10[0x10]; S1_5568E8* m10; };
u32 f_5568E8(S0_5568E8* p) { return p->m10->m2CC; }
