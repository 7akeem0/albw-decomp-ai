typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A90;
struct S1_556A90;
struct S1_556A90 { char pad338[0x338]; u32 m338; };
struct S0_556A90 { char pad18[0x18]; S1_556A90* m18; };
u32 f_556A90(S0_556A90* p) { return p->m18->m338; }
