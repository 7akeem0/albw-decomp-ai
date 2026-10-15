typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556898;
struct S1_556898;
struct S1_556898 { char padCE[0xCE]; s8 mCE; };
struct S0_556898 { char pad14[0x14]; S1_556898* m14; };
s8 f_556898(S0_556898* p) { return p->m14->mCE; }
