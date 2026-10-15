typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A9C;
struct S1_556A9C;
struct S1_556A9C { char pad509[0x509]; u8 m509; };
struct S0_556A9C { char pad10[0x10]; S1_556A9C* m10; };
u8 f_556A9C(S0_556A9C* p) { return p->m10->m509; }
