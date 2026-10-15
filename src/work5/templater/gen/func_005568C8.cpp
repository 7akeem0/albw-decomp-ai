typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5568C8;
struct S1_5568C8;
struct S1_5568C8 { char pad42[0x42]; s16 m42; };
struct S0_5568C8 { char pad14[0x14]; S1_5568C8* m14; };
s16 f_5568C8(S0_5568C8* p) { return p->m14->m42; }
