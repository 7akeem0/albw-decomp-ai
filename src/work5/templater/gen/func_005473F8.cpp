typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5473F8;
struct S1_5473F8;
struct S1_5473F8 { char pad8A[0x8A]; s8 m8A; };
struct S0_5473F8 { char pad14[0x14]; S1_5473F8* m14; };
s8 f_5473F8(S0_5473F8* p) { return p->m14->m8A; }
