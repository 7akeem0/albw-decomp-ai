typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5569F8;
struct S1_5569F8;
struct S1_5569F8 { char pad430[0x430]; u8 m430; };
struct S0_5569F8 { char pad10[0x10]; S1_5569F8* m10; };
u8 f_5569F8(S0_5569F8* p) { return p->m10->m430; }
