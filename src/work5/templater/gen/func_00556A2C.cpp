typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A2C;
struct S1_556A2C;
struct S1_556A2C { char pad508[0x508]; u8 m508; };
struct S0_556A2C { char pad10[0x10]; S1_556A2C* m10; };
u8 f_556A2C(S0_556A2C* p) { return p->m10->m508; }
