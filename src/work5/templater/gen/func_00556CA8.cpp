typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556CA8;
struct S1_556CA8;
struct S1_556CA8 { char pad6CC[0x6CC]; f32 m6CC; };
struct S0_556CA8 { char pad10[0x10]; S1_556CA8* m10; };
f32 f_556CA8(S0_556CA8* p) { return p->m10->m6CC; }
