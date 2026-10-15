typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A38;
struct S1_556A38;
struct S1_556A38 { char pad505[0x505]; u8 m505; };
struct S0_556A38 { char pad10[0x10]; S1_556A38* m10; };
u8 f_556A38(S0_556A38* p) { return p->m10->m505; }
